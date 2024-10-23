# 二份查找法

二分查找算法（Binary Search Algorithm）：也叫做折半查找算法、对数查找算法，是一种用于在有序数组中查找特定元素的高效搜索算法。

二分查找的基本算法思想为：通过确定目标元素所在的区间范围，反复将查找范围减半，直到找到元素或找不到该元素为止。

操作步骤：
1. 初始化：确定要查找的有序数据集合，其中元素按照升序或降序排列。
2. 确定查找范围：将整个有序数组集合的查找范围确定为整个数组范围区间，即左边界和右边界。
3. 查找中间元素：计算中间元素的索引，即左边界索引加上右边界索引的一半。mid = (left + right) / 2。
4. 比较中间元素：将目标元素与中间元素进行比较：
    - 如果目标元素等于中间元素，则返回中间元素的索引。
    - 如果目标元素小于中间元素，则将右边界索引更新为 mid - 1。
    - 如果目标元素大于中间元素，则将左边界索引更新为 mid + 1。
5. 重复查找：重复步骤 3 和步骤 4，直到找到目标元素或者左边界索引大于右边界索引。

时间复杂度：O(logn)
空间复杂度：O(1)

## 细节问题

1. 区间开闭问题：在二分查找中，区间的开闭问题是一个常见的问题，一般有两种区间定义方式：
    - 左闭右闭区间：`[left, right]`，即左右边界都包含在内。
    - 左闭右开区间：`[left, right)`，即左边界包含在内，右边界不包含在内。
    - 两种区间定义方式的区别在于循环条件的判断，左闭右闭区间的循环条件为 `while (left <= right)`，左闭右开区间的循环条件为 `while (left < right)`。

2. mid 取值问题：在计算 mid 时，如果直接使用 `mid = (left + right) / 2`，可能会导致整数溢出问题，因此一般使用 `mid = left + (right - left) / 2`。

3. 循环条件问题：在二分查找中，循环条件的判断是一个关键问题，一般有两种循环条件：
    - 左闭右闭区间：`while (left <= right)`，因为左闭右闭区间中，left 和 right 相等时，区间内还有一个元素。
    - 左闭右开区间：`while (left < right)`，因为左闭右开区间中，left 和 right 相等时，区间内没有元素。

4. 搜索区间范围通常有三种写法：
    - left = mid + 1, right = mid - 1
    - left = mid, right = mid - 1
    - left = mid + 1, right = mid

    - 这三种写法与二分法的两种不同思路有关：
        - 「直排法」：在循环体中找到元素欧直接返回结果；
        - 「排除法」：在循环体中排除目标元素一定不存在的区间。

### 直排法

直接法思想：一旦我们在循环体中找到元素就直接返回结果。

1. 设定左右边界为 `[0, n - 1]`；
2. 取两个节点的中心节点 `mid = (left + right) / 2`，先比较中心节点是否为目标值：
    - 如果是目标值，直接返回；
    - 如果 target > mid，说明目标值在右侧，更新左边界为 `mid + 1`；
    - 如果 target < mid，说明目标值在左侧，更新右边界为 `mid - 1`；
3. 如果左边界大于右边界，说明没有找到目标值，返回 -1。

```cpp
class Solution{
public:
    int binarySearch(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        // 在区间 [left, right] 内查找 target
        while(left <= right){
            // 取区间中心节点
            int mid = left + (right - left) / 2;
            // 判断中心节点是否为目标值
            if(nums[mid] == target) return mid;
            // 如果小于目标值，则在 [mid + 1, right] 区间查找
            else if(nums[mid] < target) left = mid + 1;
            // 如果大于目标值，则在 [left, mid - 1] 区间查找
            else right = mid - 1;
        }
        return -1;
    }
};
```

### 排除法

排除法思想：在循环体中排除目标元素一定不存在的区间。

1. 设定左右边界为左闭右闭区间 `[0, n - 1]`；
2. 取两个节点的中心节点 `mid = (left + right) / 2`，先比较中心节点是否为目标值，先派除掉目标元素一定不存在的区间；
3. 然后在剩余区间中继续查找。
4. 直到区间中只剩一个元素，判断该元素是否为目标值。

```cpp
class Solution{
public:
    int binarySearch(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        // 在区间 [left, right] 内查找 target
        while(left < right){
            // 取区间中心节点
            int mid = left + (right - left) / 2;
            // 如果小于目标值，则在 [mid + 1, right] 区间查找
            else if(nums[mid] < target) left = mid + 1;
            // 如果大于目标值，则在 [left, mid] 区间查找
            else right = mid;
        }
        return nums[left] == target ? left : -1;
    }
};
```
或者以右侧为基准：
```cpp
class Solution{
public:
    int binarySearch(vector<int>& nums, int target){
        int left = 0, right = nums.size() - 1;
        // 在区间 [left, right] 内查找 target
        while(left < right){
            // 取区间中心节点
            int mid = left + (right - left + 1) / 2;
            // 如果大于目标值，则在 [left, mid - 1] 区间查找
            else if(nums[mid] > target) right = mid - 1;
            // 如果大于目标值，则在 [mid, right] 区间查找
            else left = mid;
        }
        return nums[left] == target ? left : -1;
    }
};
```

1. 判断语句 left < right，这样退出循环时，left 和 right 相等，区间内还有一个元素，判断 left 即可。
2. 循环体中，在比较元素和中间元素的大小之后，优先将目标元素一定不存在的区间排除掉，然后在剩余区间中继续查找。
3. 避免死循环 mid 一定要向上取整，即 mid = left + (right - left + 1) / 2。
    - left = mid + 1, right = mid 和 mid = left + (right - left) / 2 配对出现；
    - left = mid, right = mid - 1 和 mid = left + (right - left + 1) / 2 配对出现。


## 总结

- 直接法：如果判断语句是 `left <= right`，有时要考虑返回是 left 还是 right。循环体内有 3 个分支，并且一定有一个分支用于退出循环或者直接退出。解决简单问题及可以方便使用比较符号的情况。
- 排除法：更加符合二分查找算法的减治思想。每次排除目标元素一定不存在的区间，达到减少问题规模的效果。然后在可能存在的区间内继续查找目标元素。这种思路适合解决复杂题目。比如查找一个数组里可能不存在的元素，找边界问题，可以使用这种思路。


## 题目

### 普通二分题目

- 关键词，有序数组，查找目标数，时间复杂度 O(logn)。

1. [0704\_二分查找](https://leetcode.cn/problems/binary-search/)--[code](./0704_binary_search.cpp)：给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
    - 解题思路：使用直接二分法查找即可。

2. [0374\_猜数字大小](https://leetcode.cn/problems/guess-number-higher-or-lower/description/)--[code](./0374_guess-number-higher-or-lower.cpp)：猜数字游戏的规则如下：
    - 我从 1 到 n 选择一个数字。 你需要猜我选择了哪个数字。
    - 每次你猜错了，我会告诉你这个数字是大了还是小了。
    - 你调用一个预先定义好的接口 guess(int num)，它会返回 3 个可能的结果（-1，1 或 0）：
        - -1：我选的数字比你猜的数字小 pick < num
        - 1：我选的数字比你猜的数字大 pick > num
        - 0：我选的数字等于你猜的数字 pick == num
    
    - 解题思路：使用二分法查找即可，和 704 类似只是带了个 guess 接口来返回比较结果。


3. [0035\_搜索插入位置](https://leetcode.cn/problems/search-insert-position/description/)--[code](./0035_search-insert-position.cpp)：给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
    - 解题思路：使用直接二分法查找即可，如果找到目标值则返回索引，如果没有找到则返回 left 即可。

4. [0034\_在排序数组中查找元素的第一个和最后一个位置](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/)--[code](./0034_find-first-and-last-position.cpp)：给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。
    - 解题思路：使用两次二分查找，分别查找左边界和右边界即可。注意查找左边界时，如果 mid 大于等于 target，则更新 right 为 mid-1，查找右边界时，如果 mid 小于等于 target，则更新 left 为 mid + 1。

5. [0153\_寻找旋转排序数组中的最小值](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/description//)--[code](./0153_find-minimum-in-rotated-sorted-array.cpp)：假设按照升序排序的数组在预先未知的某个点上进行了旋转。请找出其中最小的元素。
    - 解题思路：使用二分法查找即可，如果 mid 大于 right，则说明最小值在右侧，更新 left 为 mid + 1，否则更新 right 为 mid。

6. [0154\_寻找旋转排序数组中的最小值 II](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array-ii/description/)--[code](./0154_find-minimum-in-rotated-sorted-array-ii.cpp)：假设按照升序排序的数组在预先未知的某个点上进行了旋转。请找出其中最小的元素。
    - 解题思路：和 153 类似，只是数组中可能存在重复元素，因此需要在 mid 等于 right 时，right 减一，然后继续查找。

7. [0033\_搜索旋转排序数组](https://leetcode.cn/problems/search-in-rotated-sorted-array/description/)--[code](./0033_search-in-rotated-sorted-array.cpp)：假设按照升序排序的数组在预先未知的某个点上进行了旋转。请找出其中最小的元素。
    - 解题思路：使用二分法查找即可，如果 mid 大于等于 left，则说明左侧有序，如果 target 在左侧，则更新 right 为 mid - 1，否则更新 left 为 mid + 1；如果 mid 小于等于 right，则说明右侧有序，如果 target 在右侧，则更新 left 为 mid + 1，否则更新 right 为 mid - 1。

8. [0081\_搜索旋转排序数组 II](https://leetcode.cn/problems/search-in-rotated-sorted-array-ii/description/)--[code](./0081_search-in-rotated-sorted-array-ii.cpp)：假设按照升序排序的数组在预先未知的某个点上进行了旋转。请找出其中最小的元素。
    - 解题思路：和 33 类似，只是数组中可能存在重复元素，因此需要在 mid 等于 right 时，right 减一，然后继续查找。


9. [0074\_搜索二维矩阵](https://leetcode.cn/problems/search-a-2d-matrix/description/)--[code](./0074_search-a-2d-matrix.cpp)：编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：
    - 每行中的整数从左到右按升序排列。
    - 每行的第一个整数大于前一行的最后一个整数。
    - 解题思路：将二维矩阵看成一个有序数组，使用二分法查找即可。核心点就是如何通过 mid 获取到 mid_value

10. [0240\_搜索二维矩阵 II](https://leetcode-cn.com/problems/search-a-2d-matrix-ii/description/)--[code](./0240_search-a-2d-matrix-ii.cpp)：编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target。该矩阵具有以下特性：
    - 每行的元素从左到右升序排列。
    - 每列的元素从上到下升序排列。
    - 解题思路：从右上角开始查找，如果 target 小于当前值，则向左移动，如果 target 大于当前值，则向下移动。