#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};

TEST_CASE("Check Solution searchInsert method work successfully") {
    Solution solution;

    vector<int> param;
    int target = -1;
    int result = -1;
    tie(param, target, result) = GENERATE(table<vector<int>, int, int>({
        make_tuple(vector<int>{1, 3, 5, 6}, 5, 2),
        make_tuple(vector<int>{1, 3, 5, 6}, 2, 1),
        make_tuple(vector<int>{1, 3, 5, 6}, 0, 0),
        make_tuple(vector<int>{1, 3, 5, 6}, 7, 4),
    }));

    REQUIRE(solution.searchInsert(param, target) == result);
}
