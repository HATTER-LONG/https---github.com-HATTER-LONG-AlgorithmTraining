#include "Tools/Tools.hpp"
#include <spdlog/spdlog.h>

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) {
            return {};
        }
        int row = matrix.size();
        int col = matrix[0].size();
        int line = row + col - 1;
        vector<int> result;
        for(int i = 0; i < line; i++) {
            if(i % 2 == 0) {                     // 偶数 从下到上，到对角线后翻转
                int start_x = min(i, row - 1);   // 小于对角线就是行号，大于后就一直在最后一行
                int end_x = max(0, i - col + 1); // 小于对角线就在第一行，大于后就按行号进行递减

                for(int x = start_x; x >= end_x; x--) { // 向上是 x 变小
                    result.push_back(matrix[x][i - x]); // x 行号，y 向由上就是随着 x 缩小 i-x 扩大
                }

            } else { // 奇数 从上倒下，到对角线翻转
                int start_x = max(
                    0, i - col + 1); // 与偶数线相反, 小于对角线则一直为0，大于对角线后按照行号递减
                int end_x = min(i, row - 1);            // 小于对角线就是行号，大于就一直在最后一行
                for(int x = start_x; x <= end_x; x++) { // 向下是 x 变大
                    result.push_back(matrix[x][i - x]);
                }
            }
        }
        return result;
    }
};

TEST_CASE("Check Solution findDiagonalOrder method work successfully") {
    Solution solution;
    vector<vector<int>> inputParm;

    vector<int> resultParm;

    tie(inputParm, resultParm) = GENERATE(table<vector<vector<int>>, vector<int>>({
        make_tuple(
            vector<vector<int>>{
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9},
            },
            vector<int>{1, 2, 4, 7, 5, 3, 6, 8, 9}),
    }));

    CAPTURE(inputParm, resultParm);
    REQUIRE_THAT(solution.findDiagonalOrder(inputParm), Catch::Matchers::Equals(resultParm));
}
