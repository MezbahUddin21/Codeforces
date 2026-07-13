<h2><a href="https://codeforces.com/contest/1873/problem/D" target="_blank" rel="noopener noreferrer">1873D — 1D Eraser</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1873D](https://codeforces.com/contest/1873/problem/D) |

## Topics
`greedy` `implementation` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. 1D Eraser</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a strip of paper $$$s$$$ that is $$$n$$$ cells long. Each cell is either black or white. In an operation you can take any $$$k$$$ consecutive cells and make them all white.</p><p>Find the minimum number of operations needed to remove all black cells.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq k \leq n \leq 2 \cdot 10^5$$$) — the length of the paper and the integer used in the operation.</p><p>The second line of each test case contains a string $$$s$$$ of length $$$n$$$ consisting of characters $$$\texttt{B}$$$ (representing a black cell) or $$$\texttt{W}$$$ (representing a white cell).</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of operations needed to remove all black cells.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00520243934045558" id="id006304201045479987" class="input-output-copier">Copy</div></div><pre id="id00520243934045558"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">6 3</div><div class="test-example-line test-example-line-odd test-example-line-1">WBWWWB</div><div class="test-example-line test-example-line-even test-example-line-2">7 3</div><div class="test-example-line test-example-line-even test-example-line-2">WWBWBWW</div><div class="test-example-line test-example-line-odd test-example-line-3">5 4</div><div class="test-example-line test-example-line-odd test-example-line-3">BWBWB</div><div class="test-example-line test-example-line-even test-example-line-4">5 5</div><div class="test-example-line test-example-line-even test-example-line-4">BBBBB</div><div class="test-example-line test-example-line-odd test-example-line-5">8 2</div><div class="test-example-line test-example-line-odd test-example-line-5">BWBWBBBB</div><div class="test-example-line test-example-line-even test-example-line-6">10 2</div><div class="test-example-line test-example-line-even test-example-line-6">WBBWBBWBBW</div><div class="test-example-line test-example-line-odd test-example-line-7">4 1</div><div class="test-example-line test-example-line-odd test-example-line-7">BBBB</div><div class="test-example-line test-example-line-even test-example-line-8">3 2</div><div class="test-example-line test-example-line-even test-example-line-8">WWW</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009016597600872278" id="id00642607111222308" class="input-output-copier">Copy</div></div><pre id="id0009016597600872278">2
1
2
1
4
3
4
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case you can perform the following operations: $$$$$$\color{red}{\texttt{WBW}}\texttt{WWB} \to \texttt{WWW}\color{red}{\texttt{WWB}} \to \texttt{WWWWWW}$$$$$$</p><p>In the second test case you can perform the following operations: $$$$$$\texttt{WW}\color{red}{\texttt{BWB}}\texttt{WW} \to \texttt{WWWWWWW}$$$$$$</p><p>In the third test case you can perform the following operations: $$$$$$\texttt{B}\color{red}{\texttt{WBWB}} \to \color{red}{\texttt{BWWW}}\texttt{W} \to \texttt{WWWWW}$$$$$$</p></div>