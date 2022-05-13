# 2. Range Min Max Queries
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array&nbsp;of size <strong>N&nbsp;</strong>and<strong>&nbsp;Q</strong>&nbsp;queries. </span></p>

<p><span style="font-size:18px"><strong>getMinMax(L,R): </strong>return the minimum and maximum in the given range [L,R]<br>
<strong>updateValue(index,value): </strong>update &nbsp;arr[index] to value.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> 0-based indexing is used.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 6, Q = 3
arr[] = {11,3,7,5,9,1}
Queries = getMinMax(0,2)
&nbsp;         updateValue(3,17)
&nbsp;         getMinMax(0,5)
<strong>Output:
</strong>3 11
1 17<strong>
Explanation: </strong>There are 3 queries:&nbsp;
Query 1 : Min(0, 1, 2) = 3,
&nbsp;         Max(0, 1, 2) = 11
Query 2&nbsp;: 5&nbsp;changes to 17
Query 3&nbsp;: Min(0, 1, 2, 3, 4, 5) = 1,
&nbsp;         Max(0, 1, 2, 3, 4, 5) = 17
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete <strong>updateValue()&nbsp;</strong>and <strong>getMinMax()&nbsp;</strong>function. The <strong>segment tree has been prebuilt </strong>and provided to you.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Q*Log(N)).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10</span><sup><span style="font-size:15px">5</span></sup><br>
<span style="font-size:18px">1 &lt;= Q &lt;= 10</span><sup>5</sup><br>
<span style="font-size:18px">0 &lt;= L, R, index &lt;= N-1</span><br>
<span style="font-size:18px">1 &lt;= arr[i], value&nbsp;&lt;= 10</span><sup>5</sup></p>
 <p></p>
            </div>