#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n, 0));

        int up = 0, down = n - 1, right = n - 1, left = 0;
        int num = 1, total = n * n;

        while(num <= total) {
            for(int j = left; j <= right && num <= total; j++) {
                result[up][j] = num++;
            }
            up++;
            for(int j = up; j <= down && num <= total; j++) {
                result[j][right] = num++;
            }
            right--;
            for(int j = right; j >= left && num <= total; j--) {
                result[down][j] = num++;
            }
            down--;
            for(int j = down; j >= up && num <= total; j--) {
                result[j][left] = num++;
            }
            left++;
        }
        return result;
    }
};

TEST_CASE("Check Solution generateMatrix method work successfully!") {
    Solution solution;
    int param = 0;
    vector<vector<int>> result;
    tie(param, result) = GENERATE(table<int, vector<vector<int>>>({
        make_tuple(3, vector<vector<int>>{{1, 2, 3}, {8, 9, 4}, {7, 6, 5}}),
        make_tuple(1, vector<vector<int>>{{1}}),
    }));

    REQUIRE_THAT(solution.generateMatrix(param), Matchers::Equals(result));
}
