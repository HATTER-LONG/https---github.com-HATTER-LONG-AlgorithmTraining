#include <catch2/catch_all.hpp>
#include <spdlog/spdlog.h>
using namespace Catch;
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int pre = 1, suf = 1;
        for(int i = 0; i < n; i++) {
            result[i] = pre;
            pre *= nums[i];
        }
        for(int i = n - 1; i >= 0; i--) {
            result[i] *= suf;
            suf *= nums[i];
        }
        return result;
    }
};

TEST_CASE("Check Solution productExceptSelf method work successfully") {
    Solution solution;

    vector<int> LeftParm, result;
    // clang-format off
    tie(LeftParm,  result) = 
        GENERATE(table<vector<int>, vector<int> >
            (
                {
                    make_tuple(vector<int>{1, 2,3,4},vector<int>{24,12,8,6}),
                    make_tuple(vector<int>{-1,1,0,-3,3},vector<int>{0,0,9,0,0}),
                }
            )
        );
    // clang-format on

    REQUIRE_THAT(solution.productExceptSelf(LeftParm), Catch::Matchers::Equals(result));
}
