# Lucy's Neighbours
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Lucy lives in house number X. She has a list of N house numbers in the society. Distance between houses can be determined by studying the difference between house numbers. Help her find out K&nbsp;closest neighbors.<br>
<strong>Note: </strong>If two houses are equidistant and Lucy has to pick only one, the house with the smaller house number is given preference.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, X = 0, K = 4
a[] = {-21, 21, 4, -12, 20}, </span>
<span style="font-size:18px"><strong>Output:</strong>
-21 -12 4 20</span>
<span style="font-size:18px"><strong>Explanation:</strong>
The closest neighbour is house
number 4. Followed by -12 and 20. -21 and 21 
are both equal distance from X=0. Therefore, 
Lucy can only pick 1. Based on the given 
condition she picks -21 as it is the smaller 
of the two.&nbsp;</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 6, X = 5, K = 3</span> 
<span style="font-size:18px">a[] = {10, 2, 14, 4, 7, 6},</span>
<span style="font-size:18px"><strong>Output:</strong>
4 6 7</span><span style="font-size:18px"> 
</span></pre>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function </span>&nbsp;<span style="font-size:18px"><strong>Kclosest()</strong> which takes the array arr[], size of array N, X, and K as input parameters, and returns the list of numbers in sorted order.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NlogN)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ K ≤ N ≤ 10<sup>5</sup>&nbsp;<br>
-10<sup>4</sup> ≤ X, arr[i] ≤ 10<sup>4</sup></span></p>
 <p></p>
            </div>