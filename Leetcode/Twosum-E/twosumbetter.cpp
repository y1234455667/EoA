#include <vector>
#include <iostream>   // to keep the vscode gods happy

class Solution {
    public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    return 0;
}