#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

// 解决方案类
class Solution {
public:
    // 归并排序入口函数
    void mergeSort(vector<int>& nums) {
        if(nums.size() <= 1)
            return;                                      // 如果数组为空或只有一个元素，则无需排序
        vector<int> temp(nums.size());                   // 创建辅助数组
        mergeSortHelper(nums, temp, 0, nums.size() - 1); // 调用递归的归并排序函数
    }

private:
    // 递归的归并排序函数
    void mergeSortHelper(vector<int>& nums, vector<int>& temp, int left, int right) {
        if(left >= right)
            return;                                  // 如果左索引大于或等于右索引，则返回
        int mid = left + (right - left) / 2;         // 计算中间索引
        mergeSortHelper(nums, temp, left, mid);      // 递归排序左半部分
        mergeSortHelper(nums, temp, mid + 1, right); // 递归排序右半部分
        merge(nums, temp, left, mid, right);         // 合并两个有序的子数组
    }

    // 合并两个有序的子数组
    void merge(vector<int>& nums, vector<int>& temp, int left, int mid, int right) {
        int i = left, j = mid + 1, k = left; // 初始化指针
        while(i <= mid && j <= right) {      // 合并两个子数组
            if(nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while(i <= mid) { // 复制左半部分剩余元素
            temp[k++] = nums[i++];
        }
        while(j <= right) { // 复制右半部分剩余元素
            temp[k++] = nums[j++];
        }
        for(int i = left; i <= right; i++) { // 将排序后的元素复制回原数组
            nums[i] = temp[i];
        }
    }
};

// 测试用例
TEST_CASE("Check Solution mergeSort method work successfully") {
    Solution solution;
    vector<int> param;
    vector<int> result;
    tie(param, result) = GENERATE(table<vector<int>, vector<int>>({
        make_tuple(vector<int>{3, 2, 1, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{5, 4, 3, 2, 1}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 2, 3, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 1, 1, 1, 1}, vector<int>{1, 1, 1, 1, 1}),
    }));

    solution.mergeSort(param);
    REQUIRE_THAT(param, Catch::Matchers::Equals(result)); // 验证排序结果是否正确
}