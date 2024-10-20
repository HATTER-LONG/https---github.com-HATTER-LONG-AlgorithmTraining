# 数组基础操作

## 一维数组

1.  [0189\_轮转数组](https://leetcode.cn/problems/rotate-array/description/)--[code](./0189_rotate-array.cpp): 给定一个数组，向右旋转 k 步，其中 k 是非负数。

  - 解题思路，先完全翻转数组，然后翻转前 k 个元素，在翻转 n - k 部分即可。
  - 1，2，3，4，5 想要右旋 2 个元素 变为 4，5，1，2，3，可以先完全翻转 5，4，3，2，1，然后翻转前 2 个元素 4，5，3，2，1，最后翻转 n - k 部分 4，5，1，2，3。

2. [0066\_加一](https://leetcode.cn/problems/plus-one/description/)--[code](./0066_plus-one.cpp): 给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

  - 解题思路，从数组最后一位开始，如果当前位加 1 后不进位，直接返回，如果进位，当前位置为 0，继续下一位，直到for循环退出后 直接新构建一个 size+1 的数组，第一位置为 1 即可。

3. [1991\_寻找数组的中心索引](https://leetcode.cn/problems/find-the-middle-index-in-array/)--[code](./1991_FindTheMiddleIndexInArray.cpp): 给你一个整数数组 nums，请编写一个能够返回数组 “中心索引” 的方法。数组 中心索引是数组的一个索引，其左侧所有元素相加的和等于其右侧所有元素相加的和。如果中心索引不存在，那么返回 -1。如果有多个中心索引，那么你应该返回最靠近左边的那一个。

  - 解题思路，经典前缀和，先求出整个数组的和，然后遍历数组， 先判断左侧和 == 总数 - 左侧 - 中间位(即右侧和)， 不等则判断左侧是否大于，如果小于继续累加左侧。

4. [0485\_最大连续1的个数](https://leetcode.cn/problems/max-consecutive-ones/description/)--[code](./0485_max-consecutive-ones.cpp): 给定一个二进制数组， 计算其中最大连续1的个数。

  - 解题思路：遍历数组，如果当前元素为 1，计数器加 1，如果为 0，计数器清零，每次计数器加 1 后，更新最大值。

5. [0238\_除自身以外数组的乘积](https://leetcode.cn/problems/product-of-array-except-self/description/)--[code](./0238_product-of-array-except-self.cpp): 给你一个长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。

  - 解题思路：先从左到右遍历一遍，计算每个元素左侧的乘积，再从右到左遍历一遍，计算每个元素右侧的乘积，最后将两个数组相乘即可。

## 二维数组

1. [0498\_对角线遍历](https://leetcode.cn/problems/diagonal-traverse/)--[code](./0498_DiagonalTraverse.cpp): 给定一个含有 M x N 个元素的矩阵（M 行，N 列），请以对角线遍历的顺序返回这个矩阵中的所有元素。

  - 解题思路：矩阵的对角线遍历，可以分为两种情况，一种是从右上到左下，一种是从左下到右上，分别对应两种情况，需要注意边界条件。

2. [0048\_旋转图像](https://leetcode.cn/problems/rotate-image/description/)--[code](./0048_rotate-image.cpp): 给定一个 n × n 的二维矩阵表示一个图像。将图像顺时针旋转 90 度。

   - [解题思路](https://leetcode.cn/problems/rotate-image/solution/lu-qing-ge-chong-by-pennx-ce3x/)：旋转类基本操作如下，其他角度可以根据如下基础方法组合：
   ```text
      两层循环：上下对称是 row /2，左右对称是 col /2
      上下对称：matrix[i][j] -> matrix[n-i-1][j]，（列不变）
      左右对称：matrix[i][j] -> matrix[i][n-j-1]，（行不变）
      两层循环：主对角线是外层 i < size ，内层是 j < i
                副对角线则是 i < size，j < size - i - 1
      主对角线对称：matrix[i][j] -> matrix[j][i]，（行列互换）
      副对角线对称：matrix[i][j] -> matrix[n-j-1][n-i-1] （行列均变，且互换）

      那么，对于顺时针 90° 旋转，即本题，先写出转移式：
        matrix[i][j] -> matrix[j][n-i-1]，
      可以观察到，我们希望原来的列j不变，且要交换行列位置。
      因此可以分解为：上下对称 + 主对角线对称 或者 主对角线对称 + 左右对称，
      注意分解顺序是不能换的。
   ```

3. [0073\_矩阵置零](https://leetcode.cn/problems/set-matrix-zeroes/)--[code](./0073_SetMatrixZeroes.cpp):编写一种算法，若 M × N 矩阵中某个元素为 0，则将其所在的行与列清零。

  - 解题思路：使用两个数组记录哪些行和列需要清零，然后再次遍历矩阵，将对应行和列清零。
  - 想要常年空间复杂度，可以使用第一行和第一列来记录，但是需要注意第一行和第一列自己是否需要清零。

4. [0054\_螺旋矩阵](https://leetcode.cn/problems/spiral-matrix/description/)--[code](./0054_spiral-matrix.cpp): 给你一个 m 行 n 列的矩阵 matrix ，请按照顺时针螺旋顺序，返回矩阵中的所有元素。

  - 解题思路：模拟螺旋顺序，设定上下左右四个边界，每次遍历完一行或一列后，更新边界，直到遍历完所有元素。

5. [0059\_螺旋矩阵 II](https://leetcode.cn/problems/spiral-matrix-ii/)--[code](./0059_SpiralMatrixII.cpp):给你一个正整数 n ，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix。


   ![sample](https://assets.leetcode.com/uploads/2020/11/13/spiraln.jpg)

   - 解题思路：**本题并不涉及到什么算法，就是模拟过程，但却十分考察对代码的掌控能力。**

     - 模拟顺时针画矩阵的过程:
       ```text
       填充上行从左到右
       填充右列从上到下
       填充下行从右到左
       填充左列从下到上
       ```
     - 这里一圈下来，我们要画每四条边，这四条边怎么画，每画一条边都要坚持一致的左闭右开，或者左开右闭的原则，这样这一圈才能按照统一的规则画下来。

       <img src="https://code-thinking-1253855093.file.myqcloud.com/pics/20220922102236.png" width="400" height="300" alt="sample"/><br/>

6. [0289\_生命游戏](https://leetcode.cn/problems/game-of-life/description/)--[code](./0289_GameOfLife.cpp): 根据[百科](https://baike.baidu.com/item/%E7%94%9F%E5%91%BD%E6%B8%B8%E6%88%8F/2926434?fr=aladdin)的定义，生命游戏，是一个由英国数学家约翰·何顿·康威在 1970 年发明的细胞自动机。给定一个包含 m × n 个格子的面板，每一个格子都可以看成是一个细胞。每个细胞具有一个初始状态：1 即为活细胞（live），或 0 即为死细胞（dead）。每个细胞与其八个相邻位置（水平，垂直，对角线）的细胞都遵循以下四条生存定律：

   - 如果活细胞周围八个位置的活细胞数少于两个，则该位置活细胞死亡；
   - 如果活细胞周围八个位置有两个或三个活细胞，则该位置活细胞仍然存活；
   - 如果活细胞周围八个位置有超过三个活细胞，则该位置活细胞死亡；
   - 如果死细胞周围正好有三个活细胞，则该位置死细胞复活；

   - 解题思路：本题的难点在于如何在原地修改数组，因为每个细胞的状态是同时更新的，所以不能直接修改，可以使用额外的状态来记录，最后再更新到原数组。


## 总结

1. 一维数组基础题目主要是对数组的遍历和操作，需要注意边界条件和特殊情况。通常前缀和的思维来找到数组的特征。

2. 二维数组基础题目主要是对矩阵的遍历和操作，需要注意边界条件和特殊情况。通常需要模拟螺旋顺序或者对角线遍历的过程。