#include <catch2/catch_all.hpp>
#include <vector>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(), left = 0, right = n - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return true;
            if(nums[mid] == nums[right])
                right--;
            else if(nums[mid] >= left) {
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
        return false; // 占位返回值
    }
};

// 测试用例
TEST_CASE("Check Solution search II method work successfully") {
    Solution solution;

    vector<int> param;
    int target;
    bool result;
    tie(param, target, result) = GENERATE(table<vector<int>, int, bool>({
        make_tuple(vector<int>{2, 5, 6, 0, 0, 1, 2}, 0, true),
        make_tuple(vector<int>{2, 5, 6, 0, 0, 1, 2}, 3, false),
        make_tuple(vector<int>{1, 0, 1, 1, 1}, 0, true),
        make_tuple(vector<int>{1, 1, 1, 1, 1}, 0, false),
    }));

    REQUIRE(solution.search(param, target) == result);
}