#include <catch2/catch_all.hpp>
#include <spdlog/spdlog.h>

using namespace Catch;
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }

private:
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        // 因为 left <= right 因此最后left 必然大于 right 才会退出
        while(left <= right) {
            int mid = left + (right - left) / 2;
            // 查找出现匹配位置 == 时，更新 right 边界，向左侧逼近
            if(nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        if(left < (int)nums.size() && nums[left] == target) {
            return left;
        }
        return -1;
    }

    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            // 查找左侧第一个出现位置，需要当值相等时更新 left 边界，向右侧逼近
            if(nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if(right >= 0 && nums[right] == target) {
            return right;
        }
        return -1;
    }
};

// 测试用例
TEST_CASE("Check Solution searchRange method work successfully") {
    Solution solution;

    vector<int> param;
    int target = -1;
    vector<int> result;
    tie(param, target, result) = GENERATE(table<vector<int>, int, vector<int>>({
        // make_tuple(vector<int>{5, 7, 7, 8, 8, 10}, 8, vector<int>{3, 4}),
        // make_tuple(vector<int>{5, 7, 7, 8, 8, 10}, 6, vector<int>{-1, -1}),
        // make_tuple(vector<int>{}, 0, vector<int>{-1, -1}),
        // make_tuple(vector<int>{1}, 1, vector<int>{0, 0}),
        make_tuple(vector<int>{1, 1, 1, 1, 2, 2, 3, 4, 4}, 2, vector<int>{4, 5}),
    }));

    REQUIRE(solution.searchRange(param, target) == result);
}