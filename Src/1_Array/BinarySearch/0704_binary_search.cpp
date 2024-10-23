#include <catch2/catch_all.hpp>
#include <spdlog/spdlog.h>
using namespace Catch;
using namespace std;
namespace {

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(target == nums[mid])
                return mid;
            else if(target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};

} // namespace
TEST_CASE("Check Solution base binary search method work successfully") {
    Solution solution;

    vector<int> param;
    int target, result;
    tie(param, target, result) = GENERATE(table<vector<int>, int, int>({
        make_tuple(vector<int>{-1, 0, 3, 5, 9, 12}, 9, 4),
        make_tuple(vector<int>{-1, 0, 3, 5, 9, 12}, 2, -1),
        make_tuple(vector<int>{-1, 0}, 0, 1),
        make_tuple(vector<int>{5}, -5, -1),
    }));

    int res = solution.search(param, target);
    REQUIRE(res == result);
}
