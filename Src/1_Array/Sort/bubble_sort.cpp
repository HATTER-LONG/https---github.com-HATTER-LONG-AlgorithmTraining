#include <catch2/catch_all.hpp>
using namespace std;
using namespace Catch;

class Solution {
public:
    void bubbleSort(vector<int>& nums) {
        int n = nums.size();
        bool has_swap = false;
        for(int i = 0; i < n - 1; i++) {
            has_swap = false;
            for(int j = 0; j < n - i - 1; j++) {
                // 核心点在于交换顺序相反的数据，直到最大的数据到达最右边
                if(nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    has_swap = true;
                }
            }
            if(!has_swap)
                break;
        }
    }
};

TEST_CASE("Check Solution bubbleSort method work successfully") {
    Solution solution;
    vector<int> param;
    vector<int> result;
    tie(param, result) = GENERATE(table<vector<int>, vector<int>>({
        make_tuple(vector<int>{3, 2, 1, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{5, 4, 3, 2, 1}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 2, 3, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 1, 1, 1, 1}, vector<int>{1, 1, 1, 1, 1}),
    }));

    solution.bubbleSort(param);
    REQUIRE_THAT(param, Matchers::Equals(result));
}