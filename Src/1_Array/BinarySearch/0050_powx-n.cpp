#include "Tools/Tools.hpp"

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1.0;
        long long N = n;
        if(N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        double current = x;
        while(N > 0) {
            if(N % 2 == 1) {
                result *= current;
            }
            current *= current;
            N /= 2;
        }
        return result;
    }
};

TEST_CASE("Check Solution myPow method work successfully") {
    Solution solution;
    double inputX;
    int inputN;
    double resultParm;

    tie(inputX, inputN, resultParm) = GENERATE(table<double, int, double>({
        make_tuple(2.0, 10, 1024.0),
        make_tuple(2.1, 3, 9.261),
        make_tuple(2.0, -2, 0.25),
        make_tuple(1.0, 0, 1.0),
    }));

    CAPTURE(inputX, inputN, resultParm);
    REQUIRE(solution.myPow(inputX, inputN) == Catch::Approx(resultParm).epsilon(0.00001));
}