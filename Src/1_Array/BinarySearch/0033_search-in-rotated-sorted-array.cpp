#include <catch2/catch_all.hpp>
#include <spdlog/spdlog.h>
#include <vector>

using namespace std;
namespace {

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), left = 0, right = n - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] >= nums[left]) {
                if(nums[left] <= target && nums[mid] > target) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if(nums[right] >= target && nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return -1; // 占位返回值
    }
};
} // namespace

// 测试用例
TEST_CASE("Check Solution binary search method work successfully") {
    Solution solution;

    vector<int> param;
    int target;
    int result;
    tie(param, target, result) = GENERATE(table<vector<int>, int, int>({
        make_tuple(vector<int>{4, 5, 6, 7, 0, 1, 2}, 0, 4),
        make_tuple(vector<int>{4, 5, 6, 7, 0, 1, 2}, 3, -1),
        make_tuple(vector<int>{1}, 0, -1),
        make_tuple(vector<int>{1}, 1, 0),
    }));

    REQUIRE(solution.search(param, target) == result);
}