import { mainCommand } from './main.mjs';
import { engineName } from './js-engine.mjs';

export async function launch(expectedEngine) {
  try {
    const actual = engineName();
    if (actual !== expectedEngine) throw new Error(`lasm-${expectedEngine}.js requires ${expectedEngine}; this process is running ${actual}`);
    process.exitCode = await mainCommand(process.argv.slice(2));
  } catch (error) {
    console.error(error.name === 'LeanIOError' ? 'uncaught exception: ' + error.message
      : (error.stderr?.toString() || error.stdout?.toString() || error.message).slice(-12000));
    process.exitCode = 1;
  }
}
