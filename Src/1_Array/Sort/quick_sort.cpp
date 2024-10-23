#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

// 解决方案类
class Solution {
public:
    // 快速排序入口函数
    void quickSort(vector<int>& nums) { quickSortHelper(nums, 0, nums.size() - 1); }

private:
    // 递归的快速排序函数
    void quickSortHelper(vector<int>& nums, int left, int right) {
        if(left >= right)
            return;                                    // 如果左索引大于或等于右索引，则返回
        int pivotIndex = partition(nums, left, right); // 获取分区点
        quickSortHelper(nums, left, pivotIndex - 1);   // 递归排序左半部分
        quickSortHelper(nums, pivotIndex + 1, right);  // 递归排序右半部分
    }

    // 分区函数
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[right]; // 选择最右边的元素作为枢轴
        int i = left - 1;        // 初始化指针
        for(int j = left; j < right; j++) {
            if(nums[j] < pivot) { // 如果当前元素小于枢轴
                i++;
                swap(nums[i], nums[j]); // 交换元素
            }
        }
        swap(nums[i + 1], nums[right]); // 将枢轴放置到正确位置
        return i + 1;                   // 返回枢轴的位置
    }
};

// 测试用例
TEST_CASE("Check Solution quickSort method work successfully") {
    Solution solution;
    vector<int> param;
    vector<int> result;
    tie(param, result) = GENERATE(table<vector<int>, vector<int>>({
        make_tuple(vector<int>{3, 2, 1, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{5, 4, 3, 2, 1}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 2, 3, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 1, 1, 1, 1}, vector<int>{1, 1, 1, 1, 1}),
    }));

    solution.quickSort(param);
    REQUIRE_THAT(param, Matchers::Equals(result)); // 验证排序结果是否正确
}