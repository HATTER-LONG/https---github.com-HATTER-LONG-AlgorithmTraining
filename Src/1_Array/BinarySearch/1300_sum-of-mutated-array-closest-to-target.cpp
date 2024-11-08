#include "Tools/Tools.hpp"

class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int left = 0, right = *max_element(arr.begin(), arr.end());
        int res = right;

        auto calculateSum = [&](int value) {
            int total = 0;
            for(int m : arr) {
                total += min(m, value);
            }
            return total;
        };
        while(left <= right) {
            int mid = left + (right - left) / 2;
            int sum1 = calculateSum(mid);
            int sum2 = calculateSum(mid + 1);
            if(abs(sum1 - target) <= abs(sum2 - target)) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return res;
    }
};

TEST_CASE("Check Solution findBestValue method work successfully") {
    Solution solution;
    vector<int> inputParm;
    int target;
    int resultParm;

    tie(inputParm, target, resultParm) = GENERATE(table<vector<int>, int, int>({
        make_tuple(vector<int>{4, 9, 3}, 10, 3), make_tuple(vector<int>{2, 3, 5}, 10, 5),
        make_tuple(vector<int>{60864, 25176, 27249, 21296, 20204}, 56803, 11361),
        // 添加更多测试用例
    }));

    CAPTURE(inputParm, target, resultParm);
    REQUIRE(solution.findBestValue(inputParm, target) == resultParm);
}