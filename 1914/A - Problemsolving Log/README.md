<h2><a href="https://codeforces.com/contest/1914/problem/A" target="_blank" rel="noopener noreferrer">1914A — Problemsolving Log</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1914A](https://codeforces.com/contest/1914/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Problemsolving Log</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp is participating in a programming contest, which features $$$26$$$ problems, named from '<span class="tex-font-style-tt">A</span>' to '<span class="tex-font-style-tt">Z</span>'. The problems are sorted by difficulty. Moreover, it's known that Monocarp can solve problem '<span class="tex-font-style-tt">A</span>' in $$$1$$$ minute, problem '<span class="tex-font-style-tt">B</span>' in $$$2$$$ minutes, ..., problem '<span class="tex-font-style-tt">Z</span>' in $$$26$$$ minutes.</p><p>After the contest, you discovered his contest log — a string, consisting of uppercase Latin letters, such that the $$$i$$$-th letter tells which problem Monocarp was solving during the $$$i$$$-th minute of the contest. If Monocarp had spent enough time in total on a problem to solve it, he solved it. Note that Monocarp could have been thinking about a problem after solving it.</p><p>Given Monocarp's contest log, calculate the number of problems he solved during the contest.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of testcases.</p><p>The first line of each testcase contains a single integer $$$n$$$ ($$$1 \le n \le 500$$$) — the duration of the contest, in minutes.</p><p>The second line contains a string of length exactly $$$n$$$, consisting only of uppercase Latin letters, — Monocarp's contest log.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print a single integer — the number of problems Monocarp solved during the contest.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005855022267486703" id="id0000784792710060267" class="input-output-copier">Copy</div></div><pre id="id005855022267486703"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">6</div><div class="test-example-line test-example-line-odd test-example-line-1">ACBCBC</div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-even test-example-line-2">AAAAFPC</div><div class="test-example-line test-example-line-odd test-example-line-3">22</div><div class="test-example-line test-example-line-odd test-example-line-3">FEADBBDFFEDFFFDHHHADCC</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006493792207319375" id="id0003728618015819174" class="input-output-copier">Copy</div></div><pre id="id006493792207319375">3
1
4
</pre></div></div></div>