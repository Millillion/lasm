// native/process-launcher.c with its effects replaced by reports, for the
// model differential (test/models/cli-differential.mjs): the launcher reads
// its configuration from descriptor 3 exactly as shipped, then, instead of
// changing directories, session or descriptor flags and executing, prints
// what it would use: the three stdio flags (its F_SETFL calls), the argument
// vector and the environment `setenv` built, each entry as hex of its bytes
// on its own line. A configuration it refuses exits 125 as shipped.
#define _GNU_SOURCE
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static int report_fcntl(int fd, int command, ...) {
    va_list rest;
    va_start(rest, command);
    int value = va_arg(rest, int);
    va_end(rest);
    if (command == F_SETFL) printf("stdio %u\n", (unsigned)value);
    (void)fd;
    return 0;
}
static int report_chdir(const char *path) { (void)path; return 0; }
static int report_fchdir(int fd) { (void)fd; return 0; }
static pid_t report_setsid(void) { return 1; }
static void hex(const char *label, const char *text) {
    printf("%s ", label);
    for (const unsigned char *p = (const unsigned char *)text; *p; p++) printf("%02x", *p);
    printf("\n");
}
extern char **environ;
static int report_execvp(const char *file, char *const argv[]) {
    (void)file;
    for (int i = 0; argv[i]; i++) hex("arg", argv[i]);
    for (int i = 0; environ && environ[i]; i++) hex("env", environ[i]); // clearenv may leave it NULL
    fflush(stdout);
    _exit(0);
}
#define fcntl report_fcntl
#define chdir report_chdir
#define fchdir report_fchdir
#define setsid report_setsid
#define execvp report_execvp
#include "../../native/process-launcher.c"
