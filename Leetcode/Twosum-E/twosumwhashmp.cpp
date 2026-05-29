#include <unordered_map>
#include <vector>
#include <iostream>   // to keep the vscode gods happy

class Solution { //we are creating a class called solution, which will contain our method to solve the two sum problem.
    public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {  //giving the code instructions that two sum will return a vector of integers. 
        std::unordered_map<int, int> numMap; // value > index // creating a super fast dictionary called numMap, which will store the value of the number as the key and its index as the value. This allows us to quickly check if the complement of a number exists in the map.

        int n = nums.size(); // stating n so that I don't have to repeat it.
        for (int i = 0; i < n; i++) { //for loop, so that it goes through i only once, for O(n) time complexity.
            int complement = target - nums[i]; //complementary thinking.
            if (numMap.find(complement) != numMap.end()) { //if nummap finds the complement, and fortunately, if it ISN'T equal to post-end nothingness in the map, then we have found our two numbers that add up to the target.
                return {numMap[complement], i}; //since non equivalence between complement and post-end nothingness is true, we can return the indices of the complement and the current number. The complement's index is found in the map, and the current number's index is i.
            }
            numMap[nums[i]] = i;
        } 
        return {}; //truing to return an empty vector if no solution is found, but the problem guarantees that there will always be a solution, so this line is more of a formality than a necessity.

    }
};


int main() { // just to please the vscode gods, not part of the actual solution.
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    return 0;
}

