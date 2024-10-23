#include <catch2/catch_all.hpp>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] >= nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }
};

// 测试用例
TEST_CASE("Check Solution findMin method work successfully") {
    Solution solution;

    vector<int> param;
    int result;
    tie(param, result) = GENERATE(table<vector<int>, int>({
        make_tuple(vector<int>{3, 4, 5, 1, 2}, 1),
        make_tuple(vector<int>{4, 5, 6, 7, 0, 1, 2}, 0),
        make_tuple(vector<int>{11, 13, 15, 17}, 11),
        make_tuple(vector<int>{2, 1}, 1),
    }));

    REQUIRE(solution.findMin(param) == result);
}