#include <catch2/catch_all.hpp>

using namespace Catch;
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for(int j = i + 1; j < n; j++) {
                if(nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
    }
};

TEST_CASE("Check Solution selectionSort method work successfully") {
    Solution solution;
    vector<int> param;
    vector<int> result;
    tie(param, result) = GENERATE(table<vector<int>, vector<int>>({
        make_tuple(vector<int>{3, 2, 1, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{5, 4, 3, 2, 1}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 2, 3, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 1, 1, 1, 1}, vector<int>{1, 1, 1, 1, 1}),
    }));

    solution.selectionSort(param);
    REQUIRE_THAT(param, Matchers::Equals(result));
}