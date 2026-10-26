// The Vite plugin as users get it: from the installed Lasm CLI.
import lasm from '@lasm/cli/vite';
export default { plugins: [lasm()], base: './', build: { target: 'es2022' } };
