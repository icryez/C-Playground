#include <iostream>
#include <unordered_map>
#include <vector>

// Leetcode 1.Two Sum
std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); i++) {
    if (map.count(target - nums[i]) && map[target - nums[i]] != i) {
      return {i, map[target - nums[i]]}; // can remove from new to {.
    }
    map[nums[i]] = i;
  }
  return {0, 0};
}
int main() {
  std::cout << "First program\n";
  return 0;
}
