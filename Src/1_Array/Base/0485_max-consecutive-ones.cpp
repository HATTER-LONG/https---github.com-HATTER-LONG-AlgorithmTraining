#include <catch2/catch_all.hpp>
#include <spdlog/spdlog.h>
using namespace Catch;
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int temp = 0;
        for(auto m : nums) {
            if(m == 1) {
                temp++;
            } else {
                max = std::max(temp, max);
                temp = 0;
            }
        }

        max = std::max(temp, max);
        return max;
    }
};

TEST_CASE("Check Solution findMaxConsecutiveOnes method work successfully") {
    Solution solution;

    vector<int> LeftParm;
    int result = -1;
    // clang-format off
    tie(LeftParm,  result) = 
        GENERATE(table< vector<int>, double>
            (
                {
                    make_tuple(vector<int>{1,1,0,1,1,1}, 3),
                }
            )
        );
    // clang-format on

    REQUIRE(solution.findMaxConsecutiveOnes(LeftParm) == result);
}
