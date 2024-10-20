#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty())
            return {};

        int row = matrix.size(), col = matrix[0].size();
        vector<int> result;
        int up = 0, left = 0, right = col - 1, down = row - 1;
        size_t total = row * col;
        while(result.size() < total) {
            // 向右遍历
            for(int j = left; j <= right && result.size() < total; j++) {
                result.push_back(matrix[up][j]);
            }
            up++;
            // 向下遍历
            for(int j = up; j <= down && result.size() < total; j++) {
                result.push_back(matrix[j][right]);
            }
            right--;
            // 向左遍历
            for(int j = right; j >= left && result.size() < total; j--) {
                result.push_back(matrix[down][j]);
            }
            down--;
            // 向上遍历
            for(int j = down; j >= up && result.size() < total; j--) {
                result.push_back(matrix[j][left]);
            }
            left++;
        }
        return result;
    }
};

TEST_CASE("Check Solution spiralOrder method work successfully") {
    Solution solution;
    vector<vector<int>> param;
    vector<int> result;
    tie(param, result) = GENERATE(table<vector<vector<int>>, vector<int>>({
        make_tuple(
            vector<vector<int>>{
                {0, 1, 9, 0},
                {2, 4, 8, 10},
                {13, 3, 6, 7},
                {15, 14, 12, 16},
            },
            vector<int>{0, 1, 9, 0, 10, 7, 16, 12, 14, 15, 13, 2, 4, 8, 6, 3}),
    }));

    REQUIRE_THAT(solution.spiralOrder(param), Matchers::Equals(result));
}
