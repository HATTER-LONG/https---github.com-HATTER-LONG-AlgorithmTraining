#include "Tools/Tools.hpp"

class Solution {
public:
    int findNthDigit(int n) {
        // Step 1: 确定目标数字的位数
        long long digitLength = 1;
        long long count = 9;
        long long start = 1;

        while(n > digitLength * count) {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            start *= 10;
        }

        // Step 2: 确定目标数字所在的具体数字
        start += (n - 1) / digitLength;
        std::string number = std::to_string(start);

        // Step 3: 确定目标数字在具体数字中的位置
        return number[(n - 1) % digitLength] - '0';
    }
};

TEST_CASE("Check Solution findNthDigit method work successfully") {
    Solution solution;
    int inputParm;
    int resultParm;

    tie(inputParm, resultParm) = GENERATE(table<int, int>({
        make_tuple(3, 3), make_tuple(11, 0), make_tuple(15, 2),
        // 添加更多测试用例
    }));

    CAPTURE(inputParm, resultParm);
    REQUIRE(solution.findNthDigit(inputParm) == resultParm);
}