<h2><a href="https://codeforces.com/contest/1840/problem/B" target="_blank" rel="noopener noreferrer">1840B — Binary Cafe</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1840B](https://codeforces.com/contest/1840/problem/B) |

## Topics
`bitmasks` `combinatorics` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Binary Cafe</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Once upon a time, Toma found himself in a binary cafe. It is a very popular and unusual place.</p><p>The cafe offers visitors $$$k$$$ different delicious desserts. The desserts are numbered from $$$0$$$ to $$$k-1$$$. The cost of the $$$i$$$-th dessert is $$$2^i$$$ coins, because it is a binary cafe! Toma is willing to spend no more than $$$n$$$ coins on tasting desserts. At the same time, he is not interested in buying any dessert more than once, because one is enough to evaluate the taste.</p><p>In how many different ways can he buy several desserts <span class="tex-font-style-bf">(possibly zero)</span> for tasting?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>Then follows $$$t$$$ lines, each of which describes one test case.</p><p>Each test case is given on a single line and consists of two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 10^9$$$) — the number of coins Toma is willing to spend and the number of desserts in the binary cafe.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ integers, the $$$i$$$-th of which should be equal to the answer for the $$$i$$$-th test case — the number of ways to buy desserts for tasting.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007092554337239748" id="id0006948852437118613" class="input-output-copier">Copy</div></div><pre id="id007092554337239748"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2</div><div class="test-example-line test-example-line-even test-example-line-4">10 2</div><div class="test-example-line test-example-line-odd test-example-line-5">179 100</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003920252426983827" id="id001809561081416784" class="input-output-copier">Copy</div></div><pre id="id003920252426983827">2
2
3
4
180
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Variants for 1st sample: {}, {1}</p><p>Variants for 2nd sample: {}, {1}</p><p>Variants for 3rd sample: {}, {1}, {2}</p><p>Variants for 4th sample: {}, {1}, {2}, {1, 2}</p></div>