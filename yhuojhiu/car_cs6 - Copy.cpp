#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_indices; // Hash map to store numbers and their indices

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if (num_indices.find(complement) != num_indices.end()) {
            // Return the indices if the complement is found in the hash map
            return { num_indices[complement], i };
        }

        // Store the current number and its index in the hash map
        num_indices[nums[i]] = i;
    }

    // If no solution is found
    return {};
}

int main() {
    std::vector<int> nums1 = { 2, 7, 11, 15 };
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);

    std::cout << "Output 1: [" << result1[0] << ", " << result1[1] << "]" << std::endl;

    std::vector<int> nums2 = { 3, 2, 4 };
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);

}
