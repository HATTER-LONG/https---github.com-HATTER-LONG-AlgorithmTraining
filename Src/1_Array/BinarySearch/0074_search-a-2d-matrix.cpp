#include <catch2/catch_all.hpp>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
            return false;
        int row = matrix.size(), col = matrix[0].size();

        int left = 0, right = row * col - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            // 核心点，将二维数组视为一维，通过 mid 除以与取余数获取到行、列的对应值
            int mid_value = matrix[mid / col][mid % col];

            if(mid_value == target) {
                return true;
            } else if(mid_value < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};

// 测试用例
TEST_CASE("Check Solution searchMatrix method work successfully") {
    Solution solution;

    vector<vector<int>> param;
    int target;
    bool result;
    tie(param, target, result) = GENERATE(table<vector<vector<int>>, int, bool>({
        make_tuple(vector<vector<int>>{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 3, true),
        make_tuple(vector<vector<int>>{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}}, 13,
                   false),
        make_tuple(vector<vector<int>>{{1}}, 1, true),
        make_tuple(vector<vector<int>>{{1}}, 2, false),
    }));

    REQUIRE(solution.searchMatrix(param, target) == result);
}