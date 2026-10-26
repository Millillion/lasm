import lasm from '@lasm/vite';
export default { plugins: [lasm({ cli: process.env.LASM_CLI })], base: './', build: { target: 'es2022' } };
