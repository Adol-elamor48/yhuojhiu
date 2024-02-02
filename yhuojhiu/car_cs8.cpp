#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Define a lambda function for the custom comparison in the priority queue
    auto compare = [&](const int& a, const int& b) {
        return frequencyMap[a] > frequencyMap[b];
    };

    std::priority_queue<int, std::vector<int>, decltype(compare)> minHeap(compare);

    for (const auto& entry : frequencyMap) {
        minHeap.push(entry.first);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    std::vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }

    // Reverse the result vector to get the elements in descending order of frequency
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    // Example 1
    std::vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int k1 = 2;
    std::vector<int> result1 = topKFrequent(nums1, k1);

    std::cout << "Example 1 Output: [";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << "]\n";

    // Example 2
    std::vector<int> nums2 = {1};
    int k2 = 1;
    std::vector<int> result2 = topKFrequent(nums2, k2);

    std::cout << "Example 2 Output: [";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << "]\n";

    return 0;
}

