#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    enum ST {
        dead = 0,   // 死细胞
        live = 1,   // 活细胞
        reborn = 2, // 复活的细胞
        dying = -1, // 即将死亡的细胞
    };

    ST isalive(int row, int col, vector<vector<int>>& board, int current) {
        int live_cell = 0;
        for(int row_i = -1; row_i < 2; row_i++) {
            for(int col_j = -1; col_j < 2; col_j++) {
                if(row_i == 0 && col_j == 0)
                    continue; // 跳过自身
                int r = row + row_i, c = col + col_j;
                if(r >= 0 && r < static_cast<int>(board.size()) && c >= 0 &&
                   c < static_cast<int>(board[0].size()) &&
                   (board[r][c] == ST::live || board[r][c] == ST::dying)) {
                    live_cell++;
                }
            }
        }
        if(current == ST::live && (live_cell < 2 || live_cell > 3)) {
            return ST::dying;
        }
        if(current == ST::dead && live_cell == 3) {
            return ST::reborn;
        }
        return static_cast<ST>(current);
    }
    void gameOfLife(vector<vector<int>>& board) {
        size_t row = board.size(), col = board[0].size();

        // 第一遍扫描，标记状态
        for(size_t i = 0; i < row; i++) {
            for(size_t j = 0; j < col; j++) {
                board[i][j] = isalive(i, j, board, board[i][j]);
            }
        }

        // 第二遍扫描，更新状态
        for(size_t i = 0; i < row; i++) {
            for(size_t j = 0; j < col; j++) {
                if(board[i][j] == ST::dying) {
                    board[i][j] = ST::dead;
                } else if(board[i][j] == ST::reborn) {
                    board[i][j] = ST::live;
                }
            }
        }
    }
};

TEST_CASE("Check Solution gameOfLife method work successfully") {
    Solution solution;

    vector<vector<int>> LeftParm, result;
    tie(LeftParm, result) = GENERATE(table<vector<vector<int>>, vector<vector<int>>>({
        make_tuple(vector<vector<int>>{{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}},
                   vector<vector<int>>{{0, 0, 0}, {1, 0, 1}, {0, 1, 1}, {0, 1, 0}}),
    }));
    solution.gameOfLife(LeftParm);
    REQUIRE_THAT(LeftParm, Matchers::Equals(result));
}
