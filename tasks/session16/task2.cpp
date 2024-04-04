#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            result.push_back(numMap[complement]);
            result.push_back(i);
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    std::vector<int> nums = {3,2,6,8};
    int target = 10;

    std::vector<int> indices = twoSum(nums, target);

    if (indices.size() == 2) {
        std::cout << "Output: [" << indices[0] << ", " << indices[1] << "]" << std::endl;
    } else {
        std::cout << "No valid indices found." << std::endl;
    }

    return 0;
}