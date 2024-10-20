#include <catch2/catch_all.hpp>
using namespace Catch;
using namespace std;

class Solution {
public:
    void reserver(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums[start++], nums[end--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        size_t n = nums.size();
        k = k % n;

        reserver(nums, 0, n - 1);
        reserver(nums, 0, k - 1);
        reserver(nums, k, n - 1);
    }
};

TEST_CASE("check rotate array") {
    Solution solution;

    vector<int> LeftParm, result;
    int k = -1;
    tie(LeftParm, result, k) = GENERATE(table<vector<int>, vector<int>, int>({
        make_tuple(vector<int>{1, 2, 3, 4, 5}, vector<int>{4, 5, 1, 2, 3}, 2),
    }));
    solution.rotate(LeftParm, k);
    REQUIRE_THAT(LeftParm, Catch::Matchers::Equals(result));
}
