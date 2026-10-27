// The Vite fixture of the browser CI: the counter template mounted from a Vite bundle.
import app from './Main.lean?lasm';
const mounted = await app.mount(document.getElementById('app'));
document.getElementById('app').dispatchEvent(new CustomEvent('lasm:mounted', { detail: mounted }));
