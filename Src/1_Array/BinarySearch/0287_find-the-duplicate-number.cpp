#include "Tools/Tools.hpp"

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        int left = 1, right = len - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            int cnt = 0;
            for(auto n : nums) {
                cnt += n <= mid;
            }

            if(cnt <= mid) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return right;
    }
};

TEST_CASE("Check Solution findDuplicate method work successfully") {
    Solution solution;
    vector<int> inputParm;
    int resultParm;

    tie(inputParm, resultParm) = GENERATE(table<vector<int>, int>({
        make_tuple(vector<int>{1, 3, 4, 2, 2}, 2),
        make_tuple(vector<int>{3, 1, 3, 4, 2}, 3),
        make_tuple(vector<int>{1, 1}, 1),
        make_tuple(vector<int>{1, 1, 2}, 1),
    }));

    CAPTURE(inputParm, resultParm);
    REQUIRE(solution.findDuplicate(inputParm) == resultParm);
}