#include "Tools/Tools.hpp"

class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0, right = num / 2;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            int value = mid * mid;
            if(value == num) {
                return true;
            }
            if(value > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};

TEST_CASE("Check Solution isPerfectSquare method work successfully") {
    Solution solution;
    int inputParm;
    bool resultParm;

    tie(inputParm, resultParm) = GENERATE(table<int, bool>({
        make_tuple(16, true),
        make_tuple(14, false),
    }));

    CAPTURE(inputParm, resultParm);
    REQUIRE(solution.isPerfectSquare(inputParm) == resultParm);
}