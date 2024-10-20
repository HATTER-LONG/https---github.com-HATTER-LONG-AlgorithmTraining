#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums_l) {
        int n = nums_l.size();
        int total = 0;
        for(int m : nums_l)
            total += m;
        int left = 0;
        for(int i = 0; i < n; i++) {
            int right = total - left - nums_l[i];
            if(left == right) {
                return i;
            }
            if(left > right) {
                return -1;
            }
            left += nums_l[i];
        }
        return -1;
    }
};

TEST_CASE("Check Solution pivotIndex method work successfully") {
    Solution solution;

    vector<int> LeftParm;
    double result = -1;
    tie(LeftParm, result) = GENERATE(table<vector<int>, int>({
        make_tuple(vector<int>{1, 7, 3, 6, 5, 6}, 3),
        make_tuple(vector<int>{1, 2, 3}, -1),
    }));

    REQUIRE(solution.pivotIndex(LeftParm) == result);
}
