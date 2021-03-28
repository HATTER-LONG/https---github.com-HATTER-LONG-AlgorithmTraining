# LeetCode 算法刷题

<!-- PROJECT SHIELDS -->
![Contributors][build-url]
[![Contributors][contributors-shield]][contributors-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
<!--[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url] 
[![LinkedIn][linkedin-shield]][linkedin-url]-->
<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/HATTER-LONG/AlgorithmTraining.svg?style=flat
[contributors-url]: https://github.com/HATTER-LONG/AlgorithmTraining/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HATTER-LONG/AlgorithmTraining.svg?style=flat
[forks-url]: https://github.com/HATTER-LONG/AlgorithmTraining/network/members
[stars-shield]: https://img.shields.io/github/stars/HATTER-LONG/AlgorithmTraining.svg?style=flat
[stars-url]: https://github.com/HATTER-LONG/AlgorithmTraining/stargazers
[issues-shield]: https://img.shields.io/github/issues/HATTER-LONG/AlgorithmTraining.svg?style=flat
[issues-url]: https://github.com/HATTER-LONG/AlgorithmTraining/issues
[license-shield]: https://img.shields.io/github/license/HATTER-LONG/AlgorithmTraining?style=flat
[license-url]: https://github.com/HATTER-LONG/AlgorithmTraining/blob/master/LICENSE
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[build-url]: https://github.com/HATTER-LONG/AlgorithmTraining/workflows/CMake/badge.svg?style=flat

- [LeetCode 算法刷题](#leetcode-算法刷题)
  - [01_桶_两数之和](#01_桶_两数之和)
  - [02_链表操作_两数相加](#02_链表操作_两数相加)
  - [03_滑动窗口算法_无重复字符的最长子串](#03_滑动窗口算法_无重复字符的最长子串)
  - [04_二分法_寻找两个正序数组的中位数](#04_二分法_寻找两个正序数组的中位数)
  - [05_动态规划_最长回文子串](#05_动态规划_最长回文子串)
  - [10_动态规划||递归_正则表达式匹配](#10_动态规划递归_正则表达式匹配)
  - [11_双指针_盛最多水的容器](#11_双指针_盛最多水的容器)
  - [15_双指针_双数之和](#15_双指针_双数之和)
  - [17_递归_电话号码的字母组合](#17_递归_电话号码的字母组合)
  - [19_链表操作_删除链表的倒数第 N 个结点](#19_链表操作_删除链表的倒数第-n-个结点)
  - [20_栈_有效括号](#20_栈_有效括号)
  - [21_递归算法_合并两个有序链表](#21_递归算法_合并两个有序链表)
  - [22_动态规划_括号生成](#22_动态规划_括号生成)
  - [23_分治合并_合并 K 个升序列](#23_分治合并_合并-k-个升序列)
  - [31_两遍扫描_下一个排序](#31_两遍扫描_下一个排序)
  - [32_递归||动态规划_最长有效括号](#32_递归动态规划_最长有效括号)
  - [33_二分法_搜索旋转排序数组](#33_二分法_搜索旋转排序数组)
  - [34_二分法_在排序数组中查找元素的第一个和最后一个位置](#34_二分法_在排序数组中查找元素的第一个和最后一个位置)
  - [39_回溯_组合总和](#39_回溯_组合总和)
  - [42_双指针_接雨水](#42_双指针_接雨水)
  - [46_回溯_全排列](#46_回溯_全排列)
  - [48_数组例题原地计算_旋转图像](#48_数组例题原地计算_旋转图像)
  - [49_哈希或质数相乘_字母异位词分组](#49_哈希或质数相乘_字母异位词分组)
  - [53_动态规划||分治_最大子序和](#53_动态规划分治_最大子序和)
  - [55_貪心算法_跳跃游戏](#55_貪心算法_跳跃游戏)
  - [56_排序+双指针_合并区间](#56_排序双指针_合并区间)
  - [62_动态规划_不同路径](#62_动态规划_不同路径)
  - [64_动态规划_最小路径和](#64_动态规划_最小路径和)
  - [70_动态规划_爬楼梯](#70_动态规划_爬楼梯)
  - [72_动态规划_编辑距离](#72_动态规划_编辑距离)
  - [75_双指针_颜色分类](#75_双指针_颜色分类)
  - [76_滑动窗口_最小覆盖子串](#76_滑动窗口_最小覆盖子串)
  - [78_回溯_子集](#78_回溯_子集)
  - [79_深度优先搜索_单词搜索](#79_深度优先搜索_单词搜索)
  - [84_栈_柱状图中最大的矩形](#84_栈_柱状图中最大的矩形)
  - [85_栈_最大矩形](#85_栈_最大矩形)
  - [94_递归_二叉树的中序遍历](#94_递归_二叉树的中序遍历)
  - [96_动态规划_不同的二叉搜索树](#96_动态规划_不同的二叉搜索树)
  - [98_中序遍历||递归_验证二叉搜索树](#98_中序遍历递归_验证二叉搜索树)
  - [101_递归_对称二叉树](#101_递归_对称二叉树)
  - [102_递归_二叉树的层序遍历](#102_递归_二叉树的层序遍历)
  - [104_DFS_二叉树的最大深度](#104_dfs_二叉树的最大深度)
  - [105_递归_从前序与中序遍历序列构造二叉树](#105_递归_从前序与中序遍历序列构造二叉树)
  - [114_递归_二叉树展开为链表](#114_递归_二叉树展开为链表)
  - [121_动态规划_买卖股票的最佳时机](#121_动态规划_买卖股票的最佳时机)
  - [124_递归_二叉树中的最大路径](#124_递归_二叉树中的最大路径)
  - [128_哈希表_最长连续序列](#128_哈希表_最长连续序列)
  - [136_异或_只出现一次的数字](#136_异或_只出现一次的数字)
  - [139_DP||记忆递归_单词拆分](#139_dp记忆递归_单词拆分)
  - [141_快慢指针_环形链表](#141_快慢指针_环形链表)
  - [142_快慢指针_环形链表 II](#142_快慢指针_环形链表-ii)
  - [146_双向链表_LRU 缓存机制](#146_双向链表_lru-缓存机制)
  - [148_归并排序||快排_排序链表](#148_归并排序快排_排序链表)
  - [152_动态规划_乘积最大子数组](#152_动态规划_乘积最大子数组)
  - [155_辅助栈_最小栈](#155_辅助栈_最小栈)
  - [160_双指针_相交链表](#160_双指针_相交链表)
  - [169_摩尔投票法_多数元素](#169_摩尔投票法_多数元素)
  - [198_动态规划_打家劫舍](#198_动态规划_打家劫舍)
  - [200_BFS_岛屿数量](#200_bfs_岛屿数量)
  - [206_交换节点_翻转链表](#206_交换节点_翻转链表)
  - [207_图-拓扑搜索_课程表](#207_图-拓扑搜索_课程表)
  - [208_前缀树_实现 Trie](#208_前缀树_实现-trie)

## [01_桶_两数之和](./Src/01_TwoSum/TwoSum.cpp)

```shell
输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
```

**桶**。

- 使用 map 记录以检查的已出现的数字和对应下标 `pair(num, index)`。
- 桶查找，直到找到与当前数组匹配的另一个数字 `Target - Num[i]`，然后返回下标。

## [02_链表操作_两数相加](./Src/02_AddTwoNumbers/AddTwoNumbers.cpp)

```shell
输入：l1 = [2,4,3], l2 = [5,6,4]
输出：[7,0,8]
解释：342 + 465 = 807.
```

**两数相加**。

相加两个链表中位置对应的元素，当超过 10 时，取余进位。通过 while 循环遍历两个链表所有的元素，最终返回相加完成后的链表。

## [03_滑动窗口算法_无重复字符的最长子串](./Src/03_LongestSubstringWithoutRepeatingCharacters/LongestSubstringWithoutRepeatingCharacters.cpp)

```shell
输入：s = "abcabcbb"
输出：3 
解释：因为无重复字符的最长子串是 "abc"，所以其长度为 3。
```

**滑动窗口算法。**

- 整个循环从 l == 0; r == -1 这个空窗口开始，维护一个 res 最长的长度，通过循环遍历判断当前窗口中是否有相同的字符 （这一步判断使用桶方法）。
- 如果检查当前字符没有出现，则 r ++，增加字符到桶中， 更新 res 长度。整体窗口向右生长。
- 如果检查当前字符出现过，则 先从桶中删除 l 当前所在的字符，l ++ 向右滑动，判断是否需要更新 res 长度。整体窗口向右缩减。
- 当遍历所有字符完成得到一个最长的长度。

## [04_二分法_寻找两个正序数组的中位数](./Src/04_MedianofTwoSortedArrays/MedianofTwoSortedArrays.cpp)

```shell
输入：nums1 = [1,3], nums2 = [2]
输出：2.00000
解释：合并数组 = [1,2,3] ，中位数 2
-----------
输入：nums1 = [1,2], nums2 = [3,4]
输出：2.50000
解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5
```

**二分法**。

其实 insert + sort 也挺香的 `:)`。

## [05_动态规划_最长回文子串](./Src/05_LongestPalindromicSubstring/LongestPalindromicSubstring.cpp)

```shell
输入：s = "babad"
输出："bab"
解释："aba" 同样是符合题意的答案。
```

**动态规划**。

- 回文有两种情况 aba 和 abba，需要考虑两种不同的中间点。
- 解决方案是遍历整个字符串，已每个`当前字符`和`当前字符 + 1` 为中心点，向两边扩展比对，直到 left != right 返回此时 left 和 right 的下标，最终保存一个最长的，然后使用 substr 截取子串返回。

## [10_动态规划||递归_正则表达式匹配](./Src/10_RegularExpressionMatching/RegularExpressionMatching.cpp)

```shell
给你一个字符串 s 和一个字符规律 p，请你来实现一个支持 '.' 和 '*' 的正则表达式匹配。

'.' 匹配任意单个字符
'*' 匹配零个或多个前面的那一个元素

输入：s = "aa" p = "a"
输出：false
解释："a" 无法匹配 "aa" 整个字符串。

输入：s = "aaa" p = "ab*a*c*a"
输出：true
```

**动态规划或递归**。

`dp[i][j]` 表示 s 的前 i 个是否能被 p 的前 j 个匹配。

s 和 p 倒着看，`dp[i][j]` 的值可以分为以下几种情况：

1. `p[j-1]` 为普通字符，若 `s[i-1] == p[j-1]`，则 `dp[i][j] = dp[i-1][j-1]`，否则匹配失败。
2. `p[j-1]` 为 `.`，则 `dp[i][j] = dp[i-1][j-1]`。
3. `p[j−1]` 为'*'：
   1. 不看，则 `dp[i][j] = dp[i][j-2]`。
   2. 看，则 `dp[i][j] = dp[i-1][j]`。

## [11_双指针_盛最多水的容器](./Src/11_ContainerWithMostWater/ContainerWithMostWater.cpp)

![question11](Img/question_11.jpg)

```shell
输入：[1,8,6,2,5,4,8,3,7]
输出：49 
解释：图中垂直线代表输入数组 [1,8,6,2,5,4,8,3,7]。在此情况下，容器能够容纳水（表示为蓝色部分）的最大值为 49。
```

**双指针**。

这道题比较简单，首先定下左右指针，然后判断短的一侧向后或前查找下一个比自身大的数字。循环计算处最大的容积。

## [15_双指针_双数之和](./Src/15_3Sum/3Sum.cpp)

```shell
一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。

输入：nums = [-1,0,1,2,-1,-4]
输出：[[-1,-1,2],[-1,0,1]]
```

**双指针**。

对传入的 nums 进行排序。
然后对 first 元素从 0 开始在 nums 中进行遍历，然后将 third 在 nums 末尾处向前移动。
确定 second 的值为 `nums[second] + nums[third] == -nums[first]`。

## [17_递归_电话号码的字母组合](./src/../Src/17_LetterCombinationsOfAPhoneNumber/LetterCombinationsOfAPhoneNumber.cpp)

![17_question](Img/17_telephone_keypad.png)

```shell
给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。

给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。

输入：digits = "23"
输出：["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

**递归**。

首先遍历传入的按键，通过递归来获取对应按键所有的字母全排列情况。

## [19_链表操作_删除链表的倒数第 N 个结点](./Src/19_RemoveNthNodeFromEndofList/RemoveNthNodeFromEndofList.cpp)

```shell
输入：head = [1,2,3,4,5], n = 2
输出：[1,2,3,5]
```

**遍历或递归**。

定义一个快指针，随着循环遍历所有节点，另一个慢指针定位在快指针后 n 个位置的目标位置，找到后将慢指针后一个节点删除即可。

## [20_栈_有效括号](./Src/20_ValidParentheses/ValidParentheses.cpp)

```shell
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：
    1. 左括号必须用相同类型的右括号闭合。
    2. 左括号必须以正确的顺序闭合。

输入：s = "()"
输出：true

输入：s = "(]"
输出：false
```

**栈**。

遍历给定的字符串，当遇到一个左括号时，则会期望后续的遍历中有一个相同类型的右括号将其闭合。可以将这个左括号放入栈顶，当我们遇到一个右括号时，再将一个相同类型的左括号闭合。此时，我们可以取出栈顶的左括号并判断它们是否是相同类型的括号。如果不是相同的类型，或者栈中并没有左括号，那么字符串 s 无效，返回 False。

## [21_递归算法_合并两个有序链表](./Src/21_MergeTwoSortedLists/MergeTwoSortedLists.cpp)

```shell
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

    1 -> 2 -> 4
    1 -> 3 -> 4
        ↓
1 -> 1 -> 2 -> 3 -> 4 -> 4

输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]
```

**递归算法**。

首先判断是否为空链设立递归结束条件，然后判断节点大小递归决定下一个添加到结果里的节点，直到一个链表为空，递归结束。

## [22_动态规划_括号生成](./Src/22_GenerateParentheses/GenerateParentheses.cpp)

```shell
数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。

输入：n = 3
输出：["((()))","(()())","(())()","()(())","()()()"]
```

**动态规划**。

当生成一组括号序列如 `()(())`，它最左和最右肯定是一组括号 `(*)`，我们可以认为它是最后一组增加进来的括号，而其余的 n - 1 组括号则需要对所有情况进行遍历，而符合条件的遍历模板：

`"(" + 【i=p 时所有括号的排列组合】 + ")" + 【i=q 时所有括号的排列组合】`

其中 p + q = n-1，且 p q 均为非负整数。事实上，当上述 p 从 0 取到 n-1，q 从 n-1 取到 0 后，所有情况就遍历完了。

## [23_分治合并_合并 K 个升序列](./Src/21_MergeTwoSortedLists/MergeTwoSortedLists.cpp)

```shell
输入：lists = [[1,4,5],[1,3,4],[2,6]]
输出：[1,1,2,3,4,4,5,6]
解释：链表数组如下：
[
  1->4->5,
  1->3->4,
  2->6
]
将它们合并到一个有序链表中得到。
1->1->2->3->4->4->5->6
```

**分治合并**。

![23](./Img/23.png)

1. 首先实现合并两个链表的方法，具体可以 [参考 21 题](#21_递归算法_合并两个有序链表)；
2. 将 k 个链表配对并将同一对中的链表合并；
3. 第一轮合并以后，k 个链表被合并成了 k/2 个链表，平均长度为 2n/k 以此类推。
4. 重复直到得到最终的有序链表。

## [31_两遍扫描_下一个排序](./Src/31_NextPermutation/NextPermutation.cpp)

```shell
实现获取 **下一个排列** 的函数，算法需要将给定数字序列重新排列成字典序中下一个更大的排列。如果不存在下一个更大的排列，则将数字重新排列成最小的排列（即升序排列）。

必须 **原地** 修改，只允许使用额外常数空间。

输入：nums = [1,2,3]
输出：[1,3,2]
```

**两遍扫描**。

从后向前找到 index > index - 1 的地方，然后将已经遍历过的尾处最小数字移动 到 index -1 ，然后将 index - 1 到尾处反转。

## [32_递归||动态规划_最长有效括号](./Src/32_LongestValidParentheses/LongestValidParentheses.cpp)

```shell
给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号子串的长度。

输入：s = "(()"
输出：2
解释：最长有效括号子串是 "()"
```

**[递归||动态规划](https://leetcode-cn.com/problems/longest-valid-parentheses/solution/zui-chang-you-xiao-gua-hao-by-leetcode-solution/)**。

DP：有效的子串一定以 `)` 结尾，因此可知以 `(` 结尾的子串对应的 dp 值为 0。我们只需要求解 `)` 在 dp 数组中对应位置的值。我们从前往后遍历字符串求解 dp 值，我们每两个字符检查一次。

栈：可以看题解的动图，好理解。

## [33_二分法_搜索旋转排序数组](./Src/33_SearchInRotatedSortedArray/SearchInRotatedSortedArray.cpp)

```shell
升序排列的整数数组 nums 在预先未知的某个点上进行了旋转（例如， [0,1,2,4,5,6,7] 经旋转后可能变为 [4,5,6,7,0,1,2] ）。

请你在数组中搜索 target ，如果数组中存在这个目标值，则返回它的索引，否则返回 -1 。

输入：nums = [4,5,6,7,0,1,2], target = 0
输出：4
```

**二分法**。

根据中值逐步推进左边界与右边界，找出目标值。

## [34_二分法_在排序数组中查找元素的第一个和最后一个位置](./Src/34_FindFirstAndLastPositionOfElementInSortedArray/FindFirstAndLastPositionOfElementInSortedArray.cpp)

```shell
给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

如果数组中不存在目标值 target，返回 [-1, -1]。

输入：nums = [5,7,7,8,8,10], target = 8
输出：[3,4]
```

**二分法**。

分别查找 Left 和 Right 坐标，其主要区别在于当 `nums[mid] == targe` 中值等于目标时，取范围头还是尾。

注意要点再查找 RightPos 时，取中止应当 `(left + right + 1) >> 1`  ，其中 +1 上取很重要，否则 left = mid 将一直 小于 right 导致死循环。

## [39_回溯_组合总和](./Src/39_CombinationSum/CombinationSum.cpp)

```shell
给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。

candidates 中的数字可以无限制重复被选取。

输入：candidates = [2,3,6,7], target = 7,
所求解集为：
[
  [7],
  [2,2,3]
]
```

**[回溯](https://leetcode-cn.com/problems/combination-sum/solution/hui-su-suan-fa-jian-zhi-python-dai-ma-java-dai-m-2/)**。

经典回溯使用，DFS 扩展，区别是当返回上一步时会撤销。

## [42_双指针_接雨水](./Src/42_TrappingRainWater/TrappingRainWater.cpp)

```shell
给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。

输入：height = [0,1,0,2,1,0,1,3,2,1,2,1]
输出：6
解释：上面是由数组 [0,1,0,2,1,0,1,3,2,1,2,1] 表示的高度图，在这种情况下，可以接 6 个单位的雨水（蓝色部分表示雨水）。 
```

![42](./Img/42.png)

**[双指针](https://leetcode-cn.com/problems/trapping-rain-water/solution/jie-yu-shui-by-leetcode/)**。

与动态分析只依赖单侧 left_max 计算不同，使用双指针可以假设 left_max < right_max，保证了当前指向的位置高度与左侧最高点的差值及为存水量，单次遍历即可完成计算。

## [46_回溯_全排列](./Src/46_Permutations/Permutations.cpp)

```shell
给定一个 没有重复 数字的序列，返回其所有可能的全排列。

输入：[1,2,3]
输出：
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
```

**[回溯](https://leetcode-cn.com/problems/permutations/solution/hui-su-suan-fa-python-dai-ma-java-dai-ma-by-liweiw/)**。

![46](./Img/46.png)

经典回溯用法，配合 39 题食用，主要解决这种无重复、全排列的问题。

## [48_数组例题原地计算_旋转图像](./Src/48_RotateImage/RotateImage.cpp)

```shell
给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。

你必须在 原地 旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要 使用另一个矩阵来旋转图像。

输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
输出：[[7,4,1],[8,5,2],[9,6,3]]
```

![48](./Img/48.jpg)

自己实现方法：

先翻转矩阵，再按照斜对角线翻转：

```bash
{ 1, 2, 3 }      { 7, 8, 9 }      { `7`,  8 ,  9 }      { `7`,  4 ,  1 }
{ 4, 5, 6 }  ->  { 4, 5, 6 }  ->  {  4 , `5`,  6 }  ->  {  8 , `5`,  2 }
{ 7, 8, 9 }      { 1, 2, 3 }      {  1 ,  2 , `3`}      {  9 ,  6 , `3`}
```

[原地计算法](https://leetcode-cn.com/problems/rotate-image/solution/xuan-zhuan-tu-xiang-by-leetcode-solution-vu3m/)。

## [49_哈希或质数相乘_字母异位词分组](./Src/49_GroupAnagrams/GroupAnagrams.cpp)

```shell
给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。

输入：["eat", "tea", "tan", "ate", "nat", "bat"]
输出：
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```

**哈希或质数相乘**。

基础方法就是排序、置入 map 中、map 查对应插入。

本例中使用 哈希 或者 质数相乘 获得每个子串 `ID`，通过 map 查进行分类。

## [53_动态规划||分治_最大子序和](./Src/53_MaximumSubarray/MaximumSubarray.cpp)

```shell
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。
```

**动态规划||分治**。

动态规划：比较好理解，结果是求解最大和，动态规划记录前边最大的 pre 即可，这样比对 pre + cur 是否大于 cur，如果小于则 pre 就变为 cur 值。

分治：[需要再看吧](https://leetcode-cn.com/problems/maximum-subarray/solution/zui-da-zi-xu-he-by-leetcode-solution/)。

## [55_貪心算法_跳跃游戏](./Src/55_JumpGame/JumpGame.cpp)

```shell
给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。

数组中的每个元素代表你在该位置可以跳跃的最大长度。

判断你是否能够到达最后一个下标。

输入：nums = [2,3,1,1,4]
输出：true
解释：可以先跳 1 步，从下标 0 到达下标 1, 然后再从下标 1 跳 3 步到达最后一个下标。
```

**贪心算法**。

当前跳跃步骤能到达的最远点超过 size - 1 ，即必然能到达数组末尾。因此维护一个能到达最远点的 rightpos ，当超过数组 size 时返回。

## [56_排序+双指针_合并区间](./Src/56_MergeIntervals/MergeIntervals.cpp)

```shell
以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。请你合并所有重叠的区间，并返回一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间。

输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
输出：[[1,6],[8,10],[15,18]]
解释：区间 [1,3] 和 [2,6] 重叠，将它们合并为 [1,6].

输入：intervals = [[1,4],[4,5]]
输出：[[1,5]]
解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。
```

**排序+合并区间**。

知识点对 vector 进行排序后是按照二维数组第一列的大小对每个一维数组升序排序，也就是说在排完序的列表中，可以合并的区间一定是连续的。因此排序后遍历即可。

## [62_动态规划_不同路径](./Src/62_UniquePaths/UniquePaths.cpp)

![robot_maze](./Img/robot_maze.png)

```shell
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。问总共有多少条不同的路径？

输入：m = 3, n = 7
输出：28

输入：m = 3, n = 2
输出：3
解释：
从左上角开始，总共有 3 条路径可以到达右下角。
1. 向右 -> 向下 -> 向下
2. 向下 -> 向下 -> 向右
3. 向下 -> 向右 -> 向下
```

**动态规划**。

动态规划将大问题转化为小问题，考虑最终的右下角块有两种可能到达的方式，一个从上边 `[i][j-1]`，一个是从左边 `[i-1][j]`，再向上推左边块也有两个方向可以到达，最终动态公式为：`dp[i][j] = dp[i-1][j] + dp[i][j-1]`。注意边界应当都为 1，只有一个方向可到达。

## [64_动态规划_最小路径和](./Src/64_MinimumPathSum/MinimumPathSum.cpp)

```shell
给定一个包含非负整数的 m x n 网格 grid ，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。

说明：每次只能向下或者向右移动一步。

1 3 1
1 5 1
4 2 1

输入：grid = [[1,3,1],[1,5,1],[4,2,1]]
输出：7
解释：因为路径 1→3→1→1→1 的总和最小。
```

**动态规划**。

与 62 题类似，基础 DP。

## [70_动态规划_爬楼梯](./Src/70_ClimbingStairs/ClimbingStairs.cpp)

```shell
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。

输入： 2
输出： 2
解释： 有两种方法可以爬到楼顶。
1.  1 阶 + 1 阶
2.  2 阶

输入： 3
输出： 3
解释： 有三种方法可以爬到楼顶。
1.  1 阶 + 1 阶 + 1 阶
2.  1 阶 + 2 阶
3.  2 阶 + 1 阶
```

**动态规划**。

动态规划简单使用，几中变种详见代码实现。

## [72_动态规划_编辑距离](./Src/72_EditDistance/EditDistance.cpp)

```shell
给你两个单词 word1 和 word2，请你计算出将 word1 转换成 word2 所使用的最少操作数 。

你可以对一个单词进行如下三种操作：

插入一个字符
删除一个字符
替换一个字符

输入：word1 = "horse", word2 = "ros"
输出：3
解释：
horse -> rorse （将 'h' 替换为 'r')
rorse -> rose （删除 'r')
rose -> ros （删除 'e')
```

**动态规划**。

这种题难点在于分析动态规划方程：

对于单词 A 删除一个字符，对应单词 B 插入一个字符是等价的。
对于单词 B 删除一个字符，对应单词 A 插入一个字符是等价的。
对于单词 A 替换一个字符对单词 B 替换一个字符是等价的。

- 因此抽象动作为：
  1. 在单词 A 中插入一个字符；
  2. 在单词 B 中插入一个字符；
  3. 修改单词 A 的一个字符；

将单词 A 转化为 B 的方程式分析：

1. 在单词 A 中插入一个字符： 加入 horse 到 ro 的编辑距离为 a，那么 horse 到 ros 的距离不会超过 a + 1，也就是每增加一个字符，对应步数 +1 。
2. 在单词 B 中插入一个字符：同上应当不会超过已有步骤 +1。
3. 修改单词 A 的一个字符：同样不会超过已有步骤 +1。

这样在转换后需要的转化过程：

1. `D[i][j-1]` 为 A 的前 i 个字符和 B 的前 j - 1 个字符编辑距离的子问题。即对于 B 的第 j 个字符，我们在 A 的末尾添加了一个相同的字符，那么 `D[i][j]` 最小可以为 `D[i][j-1] + 1`；
2. `D[i-1][j]` 为 A 的前 i - 1 个字符和 B 的前 j 个字符编辑距离的子问题。即对于 A 的第 i 个字符，我们在 B 的末尾添加了一个相同的字符，那么 `D[i][j]` 最小可以为 `D[i-1][j] + 1`；
3. `D[i-1][j-1]` 为 A 前 i - 1 个字符和 B 的前 j - 1 个字符编辑距离的子问题。即对于 B 的第 j 个字符，我们修改 A 的第 i 个字符使它们相同，那么 `D[i][j]` 最小可以为 `D[i-1][j-1] + 1`。特别地，如果 A 的第 i 个字符和 B 的第 j 个字符原本就相同，那么我们实际上不需要进行修改操作。在这种情况下，`D[i][j]` 最小可以为 `D[i-1][j-1]`。

状态转移方程：

1. 如果 word1[i] == word2[j]，那么 op[i][j] = op[i-1][j-1]
2. 否则，op[i][j] = 1 + min(op[i][j-1], op[i-1][j], op[i-1][j-1])

```shell
 E   5   4   4   3   < 分解为将 HORSE 转到 R/RO/ROS 分别需要的步数
 S   4   3   3   2   < 分解为将 HORS 转到 R/RO/ROS 分别需要的步数
 R   3   2   2   2   < 分解为将 HOR 转到 R/RO/ROS 分别需要的步数
 O   2   2   1   2   < 分解为将 HO 转到 R/RO/ROS 分别需要的步数
 H   1   1   2   3   < 分解为将 H 转到 R/RO/ROS 分别需要的步数
 #   0   1   2   3
     #   R   O   S
```

## [75_双指针_颜色分类](./Src/75_SortColors/SortColors.cpp)

```shell
给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。

此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。

输入：nums = [2,0,2,1,1,0]
输出：[0,0,1,1,2,2]
```

**双指针**。

将 0 排到队列头，将 2 排到队列尾，中间自然是 1 了。注意当从 2 到队尾的交换回来的数字非 1，则需要重新处理此位数据。

## [76_滑动窗口_最小覆盖子串](./Src/76_MinimumWindowSubstring/MinimumWindowSubstring.cpp)

```shell
给你一个字符串 s 、一个字符串 t 。返回 s 中涵盖 t 所有字符的最小子串。如果 s 中不存在涵盖 t 所有字符的子串，则返回空字符串 "" 。

注意：如果 s 中存在这样的子串，我们保证它是唯一的答案。

输入：s = "ADOBECODEBANC", t = "ABC"
输出："BANC"
```

**滑动窗口**。

滑动窗口通常使用两个指针来实现，一个用于延申当前窗口，另一个用于收缩窗口的指针。在任意时刻，只有一个指针运动，而另一个保持静止。我们在 ss 上滑动窗口，通过移动 rr 指针不断扩张窗口。当窗口包含 tt 全部所需的字符后，如果能收缩，我们就收缩窗口直到得到最小窗口。

## [78_回溯_子集](./Src/78_Subsets/Subsets.cpp)

```shell
给你一个整数数组 nums ，数组中的元素 互不相同 。返回该数组所有可能的子集（幂集）。

解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。

输入：nums = [1,2,3]
输出：[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
```

**回溯**。

基础回溯用法，固定一位然后进行 dfs，然后退出到上一级再进行 dfs。

## [79_深度优先搜索_单词搜索](./Src/79_WordSearch/WordSearch.cpp)

```shell
给定一个二维网格和一个单词，找出该单词是否存在于网格中。

单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

给定 word = "ABCCED", 返回 true
给定 word = "SEE", 返回 true
给定 word = "ABCB", 返回 false
```

**深度优先搜索**。

注意控制已访问节点的方法，很经典。

## [84_栈_柱状图中最大的矩形](./Src/84_LargestRectangleInHistogram/LargestRectangleInHistogram.cpp)

![84_1](./Img/84_1.png) ![84_2](./Img/84_2.png)

```shell
给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。

求在该柱状图中，能够勾勒出来的矩形的最大面积。

以上是柱状图的示例，其中每个柱子的宽度为 1，给定的高度为 [2,1,5,6,2,3]。图中阴影部分为所能勾勒出的最大矩形面积，其面积为 10 个单位。

输入：[2,1,5,6,2,3]
输出：10
```

**栈**。

经典栈题解。

将一个柱体的数据存入栈表示当前还不能确认这个位置最大的矩形，出栈时表示能计算出这个位置最大的矩形，看到的元素高度严格小于栈顶元素，栈顶元素出栈。
出栈时有三种特殊情况：

1. 都遍历完成后栈顶元素出栈时一定能扩散到数组末尾，因为右边肯定没有比当前栈顶小的。
2. 当栈顶出栈时，栈内为空那么其能扩散到数组两端，此为数组中最小的。
3. 栈中存在高度相等的元素。需要对其特殊处理。

## [85_栈_最大矩形](./Src/85_MaximalRectangle/MaximalRectangle.cpp)

```shell
给定一个仅包含 0 和 1 、大小为 rows x cols 的二维二进制矩阵，找出只包含 1 的最大矩形，并返回其面积。

输入：matrix = [
    ["1","0","1","0","0"],
              -----------
    ["1","0",/"1","1","1"/],
    ["1","1",/"1","1","1"/],
             -----------
    ["1","0","0","1","0"]]
输出：6

```

**栈**。

计算 matrix 中每个元素左边连续的 1 的个数，然后将每列可以看作一个柱状图类似 84 题，求解最大面积即可。

## [94_递归_二叉树的中序遍历](./Src/94_BinaryTreeInorderTraversal/BinaryTreeInorderTraversal.cpp)

```shell
给定一个二叉树的根节点 root ，返回它的 中序 遍历。

      1
    /   \
null     2
       /   \ 
      3    null 

输入：root = [1,null,2,3]
输出：[1,3,2]
```

**递归**。

中序遍历，优先左子树 - 根节点 - 右子树。

中序遍历天然具有递归特性，先进行左子树递归直到没有节点，将左节点加入数组，再加入根节点，最后遍历右子树，重复以上步骤。

## [96_动态规划_不同的二叉搜索树](./Src/96_UniqueBinarySearchTrees/UniqueBinarySearchTrees.cpp)

```shell
输入：3
输出：5
解释：
给定 n = 3, 一共有 5 种不同结构的二叉搜索树：

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
```

**动态规划**。

- 如果整数 1 - n 中的 k 作为根节点值，则 1 - k-1 会去构建左子树，k+1 - n 会去构建右子树。
- 左子树出来的形态有 aa 种，右子树出来的形态有 bb 种，则整个树的形态有 a * ba∗b 种。
  - 以 k 为根节点的 BSTBST 种类数 = 左子树 BSTBST 种类数 * 右子树 BSTBST 种类数
- 问题变成：不同的 kk 之下，等号右边的乘积，进行累加。

## [98_中序遍历||递归_验证二叉搜索树](./Src/98_ValidateBinarySearchTree/ValidateBinarySearchTree.cpp)

```shell
给定一个二叉树，判断其是否是一个有效的二叉搜索树。

假设一个二叉搜索树具有如下特征：

节点的左子树只包含小于当前节点的数。
节点的右子树只包含大于当前节点的数。
所有左子树和右子树自身必须也是二叉搜索树。

输入：
    2
   / \
  1   3
输出：true

输入：
    5
   / \
  1   4
     / \
    3   6
输出：false
解释：输入为：[5,1,4,null,null,3,6]。
     根节点的值为 5 ，但是其右子节点值为 4 。
```

**中序遍历||递归**。

基础二叉树比对方法，递归和中序遍历。二叉搜索树特性，中序遍历必然递升，及遍历左节点 -> 根节点 -> 右节点 -> 上级节点。....。

## [101_递归_对称二叉树](./Src/101_SymmetricTree/SymmetricTree.cpp)

```shell
给定一个二叉树，检查它是否是镜像对称的。

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
    1
   / \
  2   2
 / \ / \
3  4 4  3

但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的：
    1
   / \
  2   2
   \   \
   3    3
```

**递归||迭代**。

通过「同步移动」两个指针的方法来遍历这棵树，p 指针和 q 指针一开始都指向这棵树的根，随后 p 右移时，q 左移，p 左移时，q 右移。每次检查当前 p 和 q 节点的值是否相等，如果相等再判断左右子树是否对称。

## [102_递归_二叉树的层序遍历](./Src/102_BinaryTreeLevelOrderTraversal/BinaryTreeLevelOrderTraversal.cpp)

```shell
给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。

    3
   / \
  9  20
    /  \
   15   7

返回其层序遍历结果：

[
  [3],
  [9,20],
  [15,7]
]
```

**递归**。

二叉树前序编列，根节点 -> 左节点 -> 右节点。注意记录深度。

## [104_DFS_二叉树的最大深度](./Src/104_MaximumDepthofBinaryTree/MaximumDepthofBinaryTree.cpp)

```shell
给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

说明：叶子节点是指没有子节点的节点。

示例：
给定二叉树 [3,9,20,null,null,15,7]，

    3
   / \
  9  20
    /  \
   15   7

depth = 3
```

**DFS**。

经典深度二叉树遍历。

## [105_递归_从前序与中序遍历序列构造二叉树](./Src/105_ConstructBinaryTreefromPreorderandInorderTraversal/ConstructBinaryTreefromPreorderandInorderTraversal.cpp)

```shell
根据一棵树的前序遍历与中序遍历构造二叉树。

注意：
你可以假设树中没有重复的元素。

例如，给出

前序遍历 preorder = [3,9,20,15,7]
中序遍历 inorder = [9,3,15,20,7]

返回如下的二叉树：

    3
   / \
  9  20
    /  \
   15   7
```

**递归**。

前序遍历的形式：`[ 根节点，[左子树的前序遍历结果], [右子树的前序遍历结果] ]`。

中序遍历的形式：`[ [左子树的中序遍历结果], 根节点，[右子树的中序遍历结果] ]`。

在中序遍历中定位到根节点，那么我们就可以分别知道左子树和右子树中的节点数目。由于同一颗子树的前序遍历和中序遍历的长度显然是相同的，因此我们就可以对应到前序遍历的结果中，对上述形式中的所有左右括号进行定位。

## [114_递归_二叉树展开为链表](./Src/114_FlattenBinaryTreetoLinkedList/FlattenBinaryTreetoLinkedList.cpp)

```shell
给你二叉树的根结点 root ，请你将它展开为一个单链表：

1. 展开后的单链表应该同样使用 TreeNode ，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null 。
2. 展开后的单链表应该与二叉树 先序遍历 顺序相同。

"1(2(3,4),5(,6))"  ==>  "1(,2(,3(,4(,5(,6)))))"
```

看评论区中的高赞的题解，自己考虑的思路总是从前向后遍历，记录过程路径。

而此题解直接是从右子树到底，逆向反推，完美避免了记录路径，因为反向递归退栈时总是上一级节点，修改指向即可。

## [121_动态规划_买卖股票的最佳时机](./Src/121_BestTimetoBuyandSellStock/BestTimetoBuyandSellStock.cpp)

```shell
给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。

你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。

返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。

输入：[7,1,5,3,6,4]
输出：5
解释：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
     注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。
```

只需要遍历价格数组一遍，记录历史最低点，然后在每一天考虑这么一个问题：如果我是在历史最低点买进的，那么我今天卖出能赚多少钱？当考虑完所有天数之时，就得到了最好的答案。

## [124_递归_二叉树中的最大路径](./Src/124_BinaryTreeMaximumPathSum/BinaryTreeMaximumPathSum.cpp)

```shell
路径 被定义为一条从树中任意节点出发，沿父节点-子节点连接，达到任意节点的序列。同一个节点在一条路径序列中 至多出现一次 。该路径 至少包含一个 节点，且不一定经过根节点。

路径和 是路径中各节点值的总和。

给你一个二叉树的根节点 root ，返回其 最大路径和 。

    1
  /   \
 2     3

2 + 1 + 3 = 6

    -10
   /   \
  9     20
       /  \
      15   7
15 + 20 + 7 = 42
```

**递归**。

空节点的最大贡献值等于 0。非空节点的最大贡献值等于节点值与其子节点中的最大贡献值之和（对于叶节点而言，最大贡献值等于节点值）。

[据函数 maxGain 得到每个节点的最大贡献值之后，如何得到二叉树的最大路径和？对于二叉树中的一个节点，该节点的最大路径和取决于该节点的值与该节点的左右子节点的最大贡献值，如果子节点的最大贡献值为正，则计入该节点的最大路径和，否则不计入该节点的最大路径和。维护一个全局变量 maxSum 存储最大路径和，在递归过程中更新 maxSum 的值，最后得到的 maxSum 的值即为二叉树中的最大路径和。](https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/solution/er-cha-shu-zhong-de-zui-da-lu-jing-he-by-leetcode-/)

## [128_哈希表_最长连续序列](./Src/128_LongestConsecutiveSequence/LongestConsecutiveSequence.cpp)

```shell
给定一个未排序的整数数组 nums ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。

输入：nums = [100,4,200,1,3,2]
输出：4
解释：最长数字连续序列是 [1, 2, 3, 4]。它的长度为 4。
```

**哈希表**。

通过 set 去重后，遍历数组中每个数字是否存在 x+1，查找到最长的数字。注意查找的头部判断条件是数组中不存在 x-1 即可，重点理解。

## [136_异或_只出现一次的数字](./Src/136_SingleNumber/SingleNumber.cpp)

```shell
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:

输入：[2,2,1]
输出：1
示例 2:

输入：[4,1,2,1,2]
输出：4
```

1. 交换律：a ^ b ^ c <=> a ^ c ^ b
2. 任何数于 0 异或为任何数 0 ^ n => n
3. 相同的数异或为 0: n ^ n => 0

>var a = [2, 3, 2, 4, 4]
>
>2 ^ 3 ^ 2 ^ 4 ^ 4 等价于 2 ^ 2 ^ 4 ^ 4 ^ 3 => 0 ^ 0 ^3 => 3

## [139_DP||记忆递归_单词拆分](./Src/139_WordBreak/WordBreak.cpp)

```shell
给定一个非空字符串 s 和一个包含非空单词的列表 wordDict，判定 s 是否可以被空格拆分为一个或多个在字典中出现的单词。

说明：

拆分时可以重复使用字典中的单词。
你可以假设字典中没有重复的单词。

输入：s = "leetcode", wordDict = ["leet", "code"]
输出：true
解释：返回 true 因为 "leetcode" 可以被拆分成 "leet code"。
--------------------
输入：s = "applepenapple", wordDict = ["apple", "pen"]
输出：true
解释：返回 true 因为 "applepenapple" 可以被拆分成 "apple pen apple"。
     注意你可以重复使用字典中的单词。
--------------------
输入：s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
输出：false
```

**动态规划或记忆递归**。

这两种从实现上有所不同，但是思路是一致的。均是从字符串 0 处尝试匹配字典中所有的词组，找到所有匹配的词组然后再跳到这些词组后一个位置继续遍历字典，直到找到 i + word.size == str.size 时为成功，反之失败。

## [141_快慢指针_环形链表](./Src/141_LinkedListCycle/LinkedListCycle.cpp)

```shell
给定一个链表，判断链表中是否有环。

3 -> 2 -> 0 -> -4
     ↑          ↓
      <- <- <- <-

输入：head = [3,2,0,-4], pos = 1
输出：true
解释：链表中有一个环，其尾部连接到第二个节点。a
```

**快慢指针**。

一个快指针每次前进两格，慢指针每次之前进一格，如果有环则快慢指针肯定会相遇，以此判断。

## [142_快慢指针_环形链表 II](./Src/142_LinkedListCycleII/LinkedListCycleII.cpp)

```shell
给定一个链表，返回链表中入环处第一个节点。

3 -> 2 -> 0 -> -4
     ↑          ↓
      <- <- <- <-

输入：head = [3,2,0,-4], pos = 1
输出：2 的 ListNode 节点
```

**快慢指针**。

[有两个关键点](https://leetcode-cn.com/problems/linked-list-cycle-ii/solution/linked-list-cycle-ii-kuai-man-zhi-zhen-shuang-zhi-/)：

1. 当相遇后走 a+nb 步一定是在环入口。
2. 第一次相遇时慢指针已经走了 nb 步。

## [146_双向链表_LRU 缓存机制](./Src/146_LRUCache/LRUCache.cpp)

```shell
设计和实现一个 `LRU （最近最少使用）` 缓存机制。
实现 LRUCache 类：
    LRUCache(int capacity) 以正整数作为容量 capacity 初始化 LRU 缓存
    int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。
    void put(int key, int value) 如果关键字已经存在，则变更其数据值；如果关键字不存在，则插入该组「关键字-值」。当缓存容量达到上限时，它应该在写入新数据之前删除最久未使用的数据值，从而为新的数据值留出空间。

输入
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
输出
[null, null, null, 1, null, -1, null, -1, 3, 4]

解释
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // 缓存是 {1=1}
lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
lRUCache.get(1);    // 返回 1
lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
lRUCache.get(2);    // 返回 -1 （未找到）
lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
lRUCache.get(1);    // 返回 -1 （未找到）
lRUCache.get(3);    // 返回 3
lRUCache.get(4);    // 返回 4
```

**双向链表**。

使用双向链表和哈希表可以进行 Cache 缓存。

- 双向链表按照被使用的顺序存储了这些键值对，靠近头部的键值对是最近使用的，而靠近尾部的键值对是最久未使用的。
- 哈希表即为普通的哈希映射（HashMap），通过缓存数据的键映射到其在双向链表中的位置。
- 首先使用哈希表进行定位，找出缓存项在双向链表中的位置，随后将其移动到双向链表的头部，即可在 O(1) 的时间内完成 get 或者 put 操作。

## [148_归并排序||快排_排序链表](./Src/148_SortList/SortList.cpp)

```shell
输入：head = [4,2,1,3]
输出：[1,2,3,4]

输入：head = [-1,5,3,4,0]
输出：[-1,0,3,4,5]
```

**归并排序||快速排序**。

bottom-to-up 的归并思路是这样的：先两个两个的 merge，完成一趟后，再 4 个 4 个的 merge，直到结束。举个简单的例子：[4,3,1,7,8,9,2,11,5,6].

- step=1: (3->4)->(1->7)->(8->9)->(2->11)->(5->6)
- step=2: (1->3->4->7)->(2->8->9->11)->(5->6)
- step=4: (1->2->3->4->7->8->9->11)->(5->6)
- step=8: (1->2->3->4->5->6->7->8->9->11)

链表主要操作：

1. merge(l1, l2)，双路归并。
2. cut(l, n)，断链操作。
3. dummyHead，添加一个头部节点。

## [152_动态规划_乘积最大子数组](./Src/152_MaximumProductSubarray/MaximumProductSubarray.cpp)

```shell
给你一个整数数组 nums ，请你找出数组中乘积最大的连续子数组（该子数组中至少包含一个数字），并返回该子数组所对应的乘积。

输入：[2,3,-2,4]
输出：6
解释：子数组 [2,3] 有最大乘积 6。
```

**动态规划**。

一个数字只需要考虑与前一个最大值相乘即可，实现采用了一种和`酷`的方法，同时记录最大与最小值，当遇到负数则反转，保证乘积最大。

## [155_辅助栈_最小栈](./Src/155_MinStack/MinStack.cpp)

```shell
设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) —— 将元素 x 推入栈中。
pop() —— 删除栈顶的元素。
top() —— 获取栈顶元素。
getMin() —— 检索栈中的最小元素。
 
输入：
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

输出：
[null,null,null,null,-3,null,0,-2]

解释：
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> 返回 -3.
minStack.pop();
minStack.top();      --> 返回 0.
minStack.getMin();   --> 返回 -2.
```

**辅助栈**。

当一个元素要入栈时，我们取当前辅助栈的栈顶存储的最小值，与当前元素比较得出最小值，将这个最小值插入辅助栈中；

当一个元素要出栈时，我们把辅助栈的栈顶元素也一并弹出；

在任意一个时刻，栈内元素的最小值就存储在辅助栈的栈顶元素中。

## [160_双指针_相交链表](./Src/160_IntersectionOfTwoLinkedLists/IntersectionOfTwoLinkedLists.cpp)

```shell
编写一个程序，找到两个单链表相交的起始节点。

    a1 -> a2 
            ↓
            c1 -> c2 -> c3
            ↑
b1 -> b2 -> b3

返回 c1 节点。
```

A 与 B 链表可能长度不相同，但是 A + B 是等于 B + A 的。因此当 A 链表走到 c3 后，继续从 b1 开始走，与 B 链表走到 c3 后，继续从 a1 开始走，当到达 c1 时 步数是相同的，都是 A + B。

## [169_摩尔投票法_多数元素](./Src/169_MajorityElement/MajorityElement.cpp)

```shell
给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。

你可以假设数组是非空的，并且给定的数组总是存在多数元素。

输入：[3,2,3]
输出：3

输入：[2,2,1,1,1,2,2]
输出：2
```

**摩尔投票法**。

引用 Leetcode 此题评论区的优秀解释。

> 核心就是对拼消耗。玩一个诸侯争霸的游戏，假设你方人口超过总人口一半以上，并且能保证每个人口出去干仗都能一对一同归于尽。最后还有人活下来的国家就是胜利。那就大混战呗，最差所有人都联合起来对付你（对应你每次选择作为计数器的数都是众数），或者其他国家也会相互攻击（会选择其他数作为计数器的数），但是只要你们不要内斗，最后肯定你赢。最后能剩下的必定是自己人。

## [198_动态规划_打家劫舍](./Src/198_HouseRobber/HouseRobber.cpp)

```shell
你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。

给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。

输入：[1,2,3,1]
输出：4
解释：偷窃 1 号房屋 （金额 = 1） ，然后偷窃 3 号房屋 （金额 = 3）。
     偷窃到的最高金额 = 1 + 3 = 4 。
```

**动态规划 DP**。

经典 DP 使用，核心算法为  `dp[n] = max(dp[n-2] + nums[n], dp[n-1])`，将问题化简为 当前房间是否应该偷取的问题，每个房间取最优解。注意 dp 初始化。

> 假设偷盗经过了第 i 个房间时，那么有两种可能，偷第 i 个房间，或不偷第 i 个房间。如果偷得话，那么第 i-1 的房间一定是不偷的，所以经过第 I 个房间的最大值 DP(i)=DP(I-2)+nums[i]；如果经过第 i 房间不偷的话，那么经过第 i 房间时，偷取的最大值就是偷取前 i-1 房价的最大值。这两种方案分别是 dp[i-2]+nums[i] 和 dp[i-1]，取最大值就是经过第 i 房间的最大值。

## [200_BFS_岛屿数量](./Src/200_NumberofIslands/NumberofIslands.cpp)

```shell
给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。

岛屿总是被水包围，并且每座岛屿只能由水平方向和/或竖直方向上相邻的陆地连接形成。

此外，你可以假设该网格的四条边均被水包围。

输入：grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
输出：3
```

**BFS**。

类似广度递归搜索。遍历数组每个参数，在每个 '1' 点进行 DFS 将每个点改为 '2'，并记录岛屿数量。

## [206_交换节点_翻转链表](./Src/206_ReverseLinkedList/ReverseLinkedList.cpp)

```shell
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
```

**交换节点**。

可以使用简单的遍历和递归去实现，学到了一种更好的解法；交换当前节点和前一个节点并改变指向。

## [207_图-拓扑搜索_课程表](./Src/207_CourseSchedule/CourseSchedule.cpp)

```shell
你这个学期必须选修 numCourses 门课程，记为 0 到 numCourses - 1 。

在选修某些课程之前需要一些先修课程。 先修课程按数组 prerequisites 给出，其中 prerequisites[i] = [ai, bi] ，表示如果要学习课程 ai 则 必须 先学习课程  bi 。

例如，先修课程对 [0, 1] 表示：想要学习课程 0 ，你需要先完成课程 1 。
请你判断是否可能完成所有课程的学习？如果可以，返回 true ；否则，返回 false 。

输入：numCourses = 2, prerequisites = [[1,0]]
输出：true
解释：总共有 2 门课程。学习课程 1 之前，你需要完成课程 0 。这是可能的。

输入：numCourses = 2, prerequisites = [[1,0],[0,1]]
输出：false
解释：总共有 2 门课程。学习课程 1 之前，你需要先完成​课程 0 ，并且学习课程 0 之前，你还应先完成课程 1 。这是不可能的。
```

**拓扑搜索**。

主要判断有向图中是否有环，使用拓扑也就是广度优先搜索。将没有入度（前置条件）的课程放入队列，学习时减去所有依赖此节课程的课程入度（前置条件数）。并将此时入度为 0 的课程也加入队列，最终当队列没有课程时判断已学课程是否等于所有课程数量。

## [208_前缀树_实现 Trie](./Src/208_ImplementTrie_PrefixTree/ImplementTrie_PrefixTree.cpp)

```shell
实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。

示例:

Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // 返回 true
trie.search("app");     // 返回 false
trie.startsWith("app"); // 返回 true
trie.insert("app");   
trie.search("app");     // 返回 true

```

**前缀树**。

[具体讲解](https://leetcode-cn.com/problems/implement-trie-prefix-tree/solution/trie-tree-de-shi-xian-gua-he-chu-xue-zhe-by-huwt/)
