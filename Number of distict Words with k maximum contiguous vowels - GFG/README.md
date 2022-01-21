# Number of distict Words with k maximum contiguous vowels
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Find the number of unique words consisting of lowercase alphabets only of length N that can be formed with at-most K contiguous vowels.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 1</span>
<span style="font-size: 18px; user-select: auto;">K = 0</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
21
</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
All 21 consonants.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 1</span>
<span style="font-size: 18px; user-select: auto;">K = 1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
26</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
All the english alphabets including</span>
<span style="font-size: 18px; user-select: auto;">vowels and consonants.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong>&nbsp;&nbsp;<br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">kvowelwords</strong>()&nbsp;which takes an Integer N, an intege K and returns the total number of words of size N with atmost K vowels. As the answer maybe to large please <strong style="user-select: auto;">return answer modulo 1000000007</strong>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*K)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N*K)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 1000</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 ≤ K ≤ N</span></p>
 <p style="user-select: auto;"></p>
            </div>