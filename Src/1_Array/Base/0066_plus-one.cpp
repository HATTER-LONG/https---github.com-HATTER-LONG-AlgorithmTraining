#include <catch2/catch_all.hpp>
#include <spdlog/spdlog.h>
using namespace Catch;
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        vector<int> result(n + 1);
        result[0] = 1;

        return result;
    }
};

TEST_CASE("Check Solution PlusOne method work successfully") {
    Solution solution;

    vector<int> LeftParm, result;
    // clang-format off
    tie(LeftParm,  result) = 
        GENERATE(table<vector<int>, vector<int>>
            (
                {
                    make_tuple(vector<int>{9},vector<int>{1,0}),
                    make_tuple(vector<int>{1, 2},vector<int>{1,3}),
                    make_tuple(vector<int>{1, 9, 9},vector<int>{2, 0,0}),
                }
            )
        );
    // clang-format on

    REQUIRE_THAT(solution.plusOne(LeftParm), Catch::Matchers::Equals(result));
}
