// Independent control using the FILE operation order in Lean 4.32.0 io.cpp.
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

static int native_line(FILE *stream, char *bytes) {
    int c, size = 0;
    flockfile(stream);
    while ((c = getc_unlocked(stream)) != EOF) {
        bytes[size++] = (char)c;
        if (c == '\n') break;
    }
    funlockfile(stream);
    if (ferror(stream)) return -1;
    if (feof(stream)) clearerr(stream);
    return size;
}

int main(void) {
    int fds[2];
    if (pipe(fds) || fcntl(fds[0], F_SETFL, O_NONBLOCK)) return 2;
    FILE *stream = fdopen(fds[0], "r");
    if (!stream || write(fds[1], "part", 4) != 4) return 3;
    char bytes[32];
    int partial = native_line(stream, bytes), partial_errno = errno;
    if (write(fds[1], "next\n", 5) != 5) return 4;
    int sticky = native_line(stream, bytes);
    clearerr(stream);
    if (write(fds[1], "done\n", 5) != 5) return 5;
    int cleared = native_line(stream, bytes);
    if (partial != -1 || partial_errno != EAGAIN || sticky != -1 ||
        cleared != 5 || memcmp(bytes, "done\n", 5)) return 6;
    fclose(stream);
    close(fds[1]);
    // Use a separate pipe so a preceding line-reader defect cannot conceal
    // the independent byte-reader EOF ordering check.
    if (pipe(fds) || fcntl(fds[0], F_SETFL, O_NONBLOCK)) return 7;
    stream = fdopen(fds[0], "r");
    if (!stream) return 7;
    if (native_line(stream, bytes) != -1 || !ferror(stream)) return 7;
    close(fds[1]);
    // Handle.read checks EOF before ferror and clears both sticky flags.
    size_t read_size = fread(bytes, 1, 1, stream);
    int read_error = read_size == 0 && !feof(stream);
    if (read_size == 0 && feof(stream)) clearerr(stream);
    if (read_size || read_error || ferror(stream) || feof(stream)) return 8;
    printf("{\"partialError\":true,\"partialErrno\":%d,\"stickyError\":true,\"clearedLine\":\"done\\n\",\"eofReadError\":false,\"eofBytes\":0,\"eofErrorCleared\":true}\n", partial_errno);
    fclose(stream);
    return 0;
}
