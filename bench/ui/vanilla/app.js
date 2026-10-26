// Vanilla keyed implementation of the benchmark operations (direct DOM code,
// a template row cloned per row). Same labels as examples/ui/bench/Main.lean.
'use strict';
const adjectives = ['pretty', 'large', 'big', 'small', 'tall', 'short', 'long', 'handsome', 'plain', 'quaint', 'clean',
  'elegant', 'easy', 'angry', 'crazy', 'helpful', 'mushy', 'odd', 'unsightly', 'adorable', 'important', 'inexpensive',
  'cheap', 'expensive', 'fancy'];
const colours = ['red', 'yellow', 'blue', 'green', 'pink', 'brown', 'purple', 'brown', 'white', 'black', 'orange'];
const nouns = ['table', 'chair', 'house', 'bbq', 'desk', 'car', 'pony', 'cookie', 'sandwich', 'burger', 'pizza', 'mouse', 'keyboard'];
let seed = 0x2545F4914F6CDD1Dn, nextId = 1, rows = [], selected = null;
const mask = (1n << 64n) - 1n;
const rand = () => { seed ^= (seed << 13n) & mask; seed ^= seed >> 7n; seed ^= (seed << 17n) & mask; return seed; };
const tbody = document.getElementById('tbody');
const template = document.createElement('tr');
template.innerHTML = '<td class="col-md-1"></td><td class="col-md-4"><a></a></td><td class="col-md-1"><a><span class="glyphicon glyphicon-remove" aria-hidden="true"></span></a></td><td class="col-md-6"></td>';
function build(n) {
  const out = new Array(n);
  for (let i = 0; i < n; i++) {
    const a = rand(), b = rand(), c = rand();
    const label = `${adjectives[Number(a % BigInt(adjectives.length))]} ${colours[Number(b % BigInt(colours.length))]} ${nouns[Number(c % BigInt(nouns.length))]}`;
    const tr = template.cloneNode(true);
    const id = nextId++;
    tr.firstChild.textContent = id;
    tr.childNodes[1].firstChild.textContent = label;
    out[i] = { id, label, tr };
  }
  return out;
}
function append(list) { const f = document.createDocumentFragment(); for (const r of list) f.appendChild(r.tr); tbody.appendChild(f); }
function clear() { tbody.textContent = ''; rows = []; selected = null; }
const actions = {
  run() { clear(); rows = build(1000); append(rows); },
  runlots() { clear(); rows = build(10000); append(rows); },
  add() { const more = build(1000); rows = rows.concat(more); append(more); },
  update() { for (let i = 0; i < rows.length; i += 10) { const r = rows[i]; r.label += ' !!!'; r.tr.childNodes[1].firstChild.textContent = r.label; } },
  clear,
  swaprows() {
    if (rows.length <= 998) return;
    const a = rows[1], b = rows[998];
    const afterB = b.tr.nextSibling;
    tbody.insertBefore(b.tr, a.tr);
    tbody.insertBefore(a.tr, afterB);
    rows[1] = b; rows[998] = a;
  },
};
for (const [id, f] of Object.entries(actions)) document.getElementById(id).addEventListener('click', f);
tbody.addEventListener('click', event => {
  const a = event.target.closest('a');
  if (!a) return;
  const tr = a.closest('tr');
  const index = rows.findIndex(r => r.tr === tr);
  if (index < 0) return;
  if (a.parentNode.cellIndex === 1) {
    if (selected) selected.tr.className = '';
    selected = rows[index];
    tr.className = 'danger';
  } else {
    tr.remove();
    rows.splice(index, 1);
  }
});
