# 20. Closer to sort
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr</strong>[](0-based indexing) of <strong>N</strong> integers which is <strong>closer sorted </strong>(defined below)<strong> </strong>and an element <strong>x</strong>. The task is to find the index of element <strong>x</strong> if it is present. If not present, then print -1.</span><br>
<span style="font-size:18px"><strong>Closer Sorted</strong>: The first array is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e, maybe to the <strong>arr[i+1]</strong> or <strong>arr[i-1]</strong>.<br>
<br>
<strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: N = 5, A[] = [3 2 10 4 40], x = 2
<strong>Output</strong>: 1
<strong>Explanation</strong>: 2 is present at index 1 
(0-based indexing) in the given array.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: N = 4, A[] = [2 1 4 3], x = 5
<strong>Output</strong>: -1
<strong>Explanation</strong>: 
5 is not in the array so the output will 
be -1.
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You only need to complete the <strong>function </strong>closer() that <strong>arr, N, and x as parameters </strong>and <strong>returns </strong>the index. If the element is not present, return <strong>-1</strong>.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(Log(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>6</sup><br>
1 &lt;= arr[i],x &lt;= 10</span><sup><span style="font-size:15px">9</span></sup><br>
<br>
<span style="font-size:18px"><strong>Note:&nbsp;</strong>You may assume that the array does not contain any duplicate elements.&nbsp;</span><br>
&nbsp;</p>
 <p></p>
            </div>