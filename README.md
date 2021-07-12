# Daily_Competetive_Code
 
## Problem 1: Bracket Numbers (Coding Ninjas) (Easy)-[Problem Link](https://www.codingninjas.com/codestudio/problem-details/bracket-number_1229411)

#### Problem Statement:
Given a string ‘S’ comprising of some brackets. You need to print the number of every bracket.
For Example
If S = ( pq )() 
Then the output will be 1 1 2 2. First pair of opening and closing brackets will get the same number and so does the 2nd pair.

#### Input Format
- The first line contains a single integer ‘T’ denoting the number of test cases.
- The first line of each test case contains a string ‘S’.

#### Output Format
- For each test case, print the number of every bracket separated by a space.
- Output of each test case will be printed on a new line.

#### Constraints
1. 1 <= T <= 50
2. 1 <= |S| <= 10^5

Where ‘T’ is the number of test cases.

Where ‘|S|’ is the length of a particular string.


## Problem 2: Median of Two Sorted Arrays (Leetcode) (Hard)-[Problem Link](https://leetcode.com/problems/median-of-two-sorted-arrays/)

#### Problem Statement: 
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

#### Examples:
Example 1:

- Input: nums1 = [1,3], nums2 = [2]
- Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

#### Constraints:
1. nums1.length == m
2. nums2.length == n
3. 0 <= m <= 1000
4. 0 <= n <= 1000
5. 1 <= m + n <= 2000
6. -106 <= nums1[i], nums2[i] <= 106

## Problem 3: Longest Common Prefix after Roation (Coding Ninjas) (Moderate)-[Problem Link](https://www.codingninjas.com/codestudio/problems/longest-common-prefix-after-rotation_1081472)

#### Problem Statement
You are given two strings 'A' and 'B' where string 'A' is fixed. But you can perform left shift operations on string B any number of times.
Your task is to find out the minimum number of left-shift operations required in order to obtain the longest common prefix of string 'A' and 'B'.
**Note:**
Left shift is defined as a single circular rotation on the string after which the first character becomes the last character and all other characters are shifted one index to the left.
#### Example:
If A = “an”, B = “can”.
After performing one left shift operation, string B becomes “anc”.
After performing two left shift operations, string B becomes “nca”.

#### Input Format:
- The first line contains an integer 'T' which denotes the number of test cases or queries to be run. 
- Then, the T test cases follow.

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

## Problem 4: Next Greater Element Leet Code (Easy)-[Problem Link](https://leetcode.com/problems/next-greater-element-i/)

#### Problem Statement
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

#### Example:
- Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
- Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

#### Constraints:

1. 1 <= nums1.length <= nums2.length <= 1000
2. 0 <= nums1[i], nums2[i] <= 104
3. All integers in nums1 and nums2 are unique.
4. All the integers of nums1 also appear in nums2.


## Problem 5: Palindrome Number Leetcode Easy-[Problem Link](https://leetcode.com/problems/palindrome-number/)

#### Problem Statement
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

#### Example:

- Input: x = 121
- Output: true

- Input: x = -121
- Output: false

Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

#### Constraints:
1. -231 <= x <= 231 - 1

## Problem 6: Find Path Coding Ninjas (Easy)-[Problem Link](https://www.codingninjas.com/codestudio/problems/find-path_893057?leftPanelTab=0)

#### Problem Statement
You are given a tree with N nodes with N-1 distinct edges and two nodes NODE1 and NODE2. You have to find and print a path between NODE1 and NODE2.
A tree data structure is a nonlinear hierarchical data structure that consists of nodes connected by edges.
**Note: There is no cycle present in a tree.**
**Note: All values in the tree are unique.**

#### Input Format
- The first line of input contains an integer 'T' representing the number of the test case. Then the test case follows.
- The first line of each test case contains elements of tree in level order form separated by space. Order is - 
- Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
- The second line of each test case contains two space-separated integers NODE1 and NODE2.

**Note: A tree node may have zero or more child nodes.**

#### Output Format
For each test case, print the path from NODE1 to NODE2.

**Note: You do not need to print anything; it has already been taken care of.**
#### Constraints:
1. 1 <= T <= 100
2. 1 <= N <= 2500
3. 1 <= data(N) <= 10^5
4. 1 <= NODE1, NODE2 <= 10^5

**Time Limit: 1 second**

## Problem 7: Integer to Roman Leetcode (Medium)-[Problem Link](https://leetcode.com/problems/integer-to-roman/)
#### Problem Statement
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

- Symbol       Value
- I             1
- V             5
- X             10
- L             50
- C             100
- D             500
- M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9. 
- X can be placed before L (50) and C (100) to make 40 and 90. 
- C can be placed before D (500) and M (1000) to make 400 and 900.
- Given an integer, convert it to a roman numeral.

#### Constraints:
- 1 <= num <= 3999

## Problem 8: Pair Sum Coding Ninjas (Easy)-[Problem Link](https://www.codingninjas.com/codestudio/problems/pair-sum_697295?leftPanelTab=0)

#### Problem Statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

**Note: Each pair should be sorted i.e the first value should be less than or equals to the second value.**

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

#### Input Format:
- The first line of input contains two space-separated integers 'N' and 'S', denoting the size of the input array and the value of 'S'.
- The second and last line of input contains 'N' space-separated integers, denoting the elements of the input array: ARR[i] where 0 <= i < 'N'.

#### Output Format:
- Print 'C' lines, each line contains one pair i.e two space-separated integers, where 'C' denotes the count of pairs having sum equals to given value 'S'.

**Note: You are not required to print the output, it has already been taken care of. Just implement the function.**

#### Constraints:
1. 1 <= N <= 10^3
2. -10^5 <= ARR[i] <= 10^5
3. -2 * 10^5 <= S <= 2 * 10^5

**Time Limit: 1 sec**

## Problem 9: Reverse Level Order Traversal (Medium)-[Problem Link](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118521/offering/1380977?leftPanelTab=0)

#### Problem Statement
You have been given a Binary Tree of integers. You are supposed to return the reverse of the level order traversal.

#### Input Format:
The first line contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

The first not-null node(of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level and so on.

The input ends when all nodes at the last level are null(-1).

#### Output Format:
Print all the nodes in reverse level order traversal separated by a single space.
**Note :You do not need to print anything; it has already been taken care of. Just implement the given function.**

#### Constraints:
1. 0 <= N <= 5 * 10^5
2. 0 <= data <= 10^5 and data != -1

Where ‘N’ is the total number of nodes in the binary tree, and 'data' is the value of the binary tree node.

**Time Limit: 1 sec**

## Problem 10: Buy and Sell Stocks Coding Ninjas (Medium)-[Problem Link](https://www.codingninjas.com/codestudio/problems/buying-and-selling-stock_1790233?leftPanelTab=0)

#### Problem Statement
You have been given the prices of 'N' stocks in an array where each array element represents the stock price for that day. You need to find the maximum profit which you can make by buying and selling the stocks. You may make as many transactions as you want but can not have more than one transaction at a time i.e, if you have the stock, you need to sell it first, and then only you can buy it again.

#### Constraints :
1. 1 <= t <= 10^2
2. 0 <= N <= 10^5
**Time Limit: 1 sec**

## Problem 11: Postfix to Prefix Coding Ninjas (Easy)-[Problem Link](https://www.codingninjas.com/codestudio/problems/postfix-to-prefix_1788455?leftPanelTab=0)

#### Problem Statement
Ninja has been given a Postfix expression and he needs your help in converting it to Prefix expression.
- Postfix expression is an expression where the operator appears in the expression after the operands. Simply of the form (operand1 operand2 operator)
- Prefix expression is an expression where the operator appears in the expression before the operands. Simply of the form (operator operand1 operand2)

#### Constraints:
1. 1 <= T <= 5
2. 1 <= |S| <= 10^5

**Timit Limit: 1 sec**