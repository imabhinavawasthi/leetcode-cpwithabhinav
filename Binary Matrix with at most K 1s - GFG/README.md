# Binary Matrix with at most K 1s
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary matrix <strong>M</strong> with <strong>R </strong>rows and <strong>C</strong> columns, where each element of the matrix will be 0 or 1. Find the largest square that can be formed with center <strong>(i, j)</strong> and contains atmost <strong>K</strong> 1’s. There are Q queries, a single query has two integers denoting the centre (i,j) of the square.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>R = 4, C = 5
M = {{1, 0, 1, 0, 0}&nbsp;
     {1, 0, 1, 1, 1}&nbsp;
     {1, 1, 1, 1, 1}&nbsp;
     {1, 0, 0, 1, 0}}
K = 9, Q = 1
q_i[] = {1}
q_j[] = {2}
<strong>Output:
</strong>3
<strong>Explanation:</strong>
Maximum length square with center
at (1, 2)&nbsp;that can be formed is of
3 length from (0, 1) to (2, 4).</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>R = 3, C = 3
M = {{1, 1, 1}&nbsp;
     {1, 1, 1}&nbsp;
     {1, 1, 1}}
K = 9, Q = 2
q_i[] = {1, 2}
q_j[] = {1, 2}
<strong>Output :</strong>
3 1</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>largestSquare()</strong>&nbsp;which takes 2 integers R, and C followed by a list of lists M denoting the binary matrix and then three integers i,j, and K as input and returns a list of integers denting the largest Square possible for each query.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(R*C + Q*log(MIN_DIST)), </span> <span style="font-size:18px">where MIN_DIST is the minimum distance of the center from the edges of the matrix where MIN_DIST is the minimum distance of the center from the edges of the matrix.<br>
<strong>Expected Auxiliary Space:</strong> O(R*C)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ R,C ≤ 500<br>
1 ≤ Q ≤ 10<sup>4</sup><br>
0 ≤ K ≤ R*C<br>
0 ≤ i &lt; R<br>
0 ≤ j &lt; C</span></p>
 <p></p>
            </div>