# Daily_Competetive_Code
 
## Problem 1: Bracket Numbers (Coding Ninjas) (Easy)

#### Problem Statement:
Given a string ‘S’ comprising of some brackets. You need to print the number of every bracket.
For Example
If S = ( pq )() 
Then the output will be 1 1 2 2. First pair of opening and closing brackets will get the same number and so does the 2nd pair.

#### Input Format
The first line contains a single integer ‘T’ denoting the number of test cases.
The first line of each test case contains a string ‘S’.

#### Output Format
For each test case, print the number of every bracket separated by a space.
Output of each test case will be printed on a new line.

#### Constraints
1. 1 <= T <= 50
2. 1 <= |S| <= 10^5

Where ‘T’ is the number of test cases.

Where ‘|S|’ is the length of a particular string.


## Problem 2: Median of Two Sorted Arrays (Leetcode) (Hard)

#### Problem Statement: 
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

#### Examples:
Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

#### Constraints:
1. nums1.length == m
2. nums2.length == n
3. 0 <= m <= 1000
4. 0 <= n <= 1000
5. 1 <= m + n <= 2000
6. -106 <= nums1[i], nums2[i] <= 106

## Problem 3: Longest Common Prefix after Roation (Coding Ninjas) (Moderate)

#### Problem Statement
You are given two strings 'A' and 'B' where string 'A' is fixed. But you can perform left shift operations on string B any number of times.
Your task is to find out the minimum number of left-shift operations required in order to obtain the longest common prefix of string 'A' and 'B'.
**Note:**
Left shift is defined as a single circular rotation on the string after which the first character becomes the last character and all other characters are shifted one index to the left.
For Example:
If A = “an”, B = “can”.
After performing one left shift operation, string B becomes “anc”.
After performing two left shift operations, string B becomes “nca”.
Follow Up:
Can you solve this in linear time and space complexity?
#### Input Format:
The first line contains an integer 'T' which denotes the number of test cases or queries to be run. 
Then, the T test cases follow.

The first line of each test case contains the string A.

The second line of each test case contains the string B.
#### Output Format:
For each test case, print the minimum number of left shift operations required in order to obtain the longest common prefix of string A and B.
**Note:**
You do not need to print anything. It has already been taken care of. Just implement the given function.
#### Constraints:
1. 1 <= T <= 100
2. 1 <= |A|, |B| <= 5 * 10^4
Where |A| and |B| denote the length of string, A and B respectively.   

All the characters of the string A and B contain lowercase English letters only.

**Time limit: 1 second**
