#include "Tools/Tools.hpp"

class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            double p = 1.0 * mid * mid;
            if(p == x)
                return mid;

            if(p < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return right;
    }
};

TEST_CASE("Check Solution mySqrt method work successfully") {
    Solution solution;
    int inputParm;
    int resultParm;

    tie(inputParm, resultParm) = GENERATE(table<int, int>({
        make_tuple(4, 2),
        make_tuple(8, 2),
        make_tuple(16, 4),
        make_tuple(1, 1),
        make_tuple(0, 0),
    }));

    CAPTURE(inputParm, resultParm);
    REQUIRE(solution.mySqrt(inputParm) == resultParm);
}