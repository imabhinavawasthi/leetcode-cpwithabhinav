# 19. Merge three sorted arrays
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given three sorted arrays <strong>A</strong>, <strong>B</strong> and <strong>C</strong> of size <strong>N</strong>, <strong>M</strong> and <strong>P</strong> respectively. The task is to merge them into a single array which must be sorted in increasing order.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 4, A[] = [1 2 3 4] 
M = 5, B[] = [1 2 3 4 5] 
P = 6, C[] = [1 2 3 4 5 6]
<strong>Output</strong>: 1 1 1 2 2 2 3 3 3 4 4 4 5 5 6
<strong>Explanation</strong>: Merging these three sorted 
arrays, we have: 
1 1 1 2 2 2 3 3 3 4 4 4 5 5 6.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 2, A[] = [1 2]
M = 3, B[] = [2 3 4] 
P = 4, C[] = [4 5 6 7]
<strong>Output</strong>: 1 2 2 3 4 4 5 6 7
<strong>Explanation</strong>: Merging three sorted arrays, 
we have: 1 2 2 3 4 4 5 6 7.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You only need to complete the function<strong> mergeThree()&nbsp;</strong>that takes <strong>A,B,C as parameters</strong>. The function <strong>returns </strong>an <strong>array </strong>or <strong>vector</strong>.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N + M + P)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N + M + P) for the resultant array only.</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, M, P &lt;= 10<sup>6</sup><br>
1 &lt;= A[i], B[i], C[i] &lt;= 10<sup>6</sup></span></p>
 <p></p>
            </div>