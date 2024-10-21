#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& nums) {
        int n = nums.size();

        for(int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i - 1;
            while(j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
    }
};

TEST_CASE("Check Solution insertionSort method work successfully") {
    Solution solution;
    vector<int> param;
    vector<int> result;
    tie(param, result) = GENERATE(table<vector<int>, vector<int>>({
        make_tuple(vector<int>{3, 2, 1, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{5, 4, 3, 2, 1}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 2, 3, 4, 5}, vector<int>{1, 2, 3, 4, 5}),
        make_tuple(vector<int>{1, 1, 1, 1, 1}, vector<int>{1, 1, 1, 1, 1}),
    }));

    solution.insertionSort(param);
    REQUIRE_THAT(param, Matchers::Equals(result));
}