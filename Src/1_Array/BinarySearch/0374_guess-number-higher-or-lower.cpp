#include "Tools/Tools.hpp"

// 猜数字的 API
std::function<int(int)> guess;
class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            int res = guess(mid);

            if(res == 0) {
                return mid;
            } else if(res < 0) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
};

// 测试用例
TEST_CASE("Check Solution guessNumber method work successfully") {
    Solution solution;
    int n, pick, result;
    tie(n, pick, result) = GENERATE(table<int, int, int>({
        make_tuple(10, 6, 6),
        make_tuple(1, 1, 1),
        make_tuple(2, 1, 1),
        make_tuple(2, 2, 2),
    }));
    guess = [pick](int num) {
        if(num == pick)
            return 0;
        return num > pick ? -1 : 1;
    };
    REQUIRE(solution.guessNumber(n) == result);
}