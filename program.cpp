#include <iostream>
#include <unordered_map>
#include <vector>

// Leetcode 1.Two Sum
std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); i++) {
    if (map.count(target - nums[i]) && map[target - nums[i]] != i) {
      return *new std::vector<int>{i, map[target - nums[i]]};
    }
    map[nums[i]] = i;
  }
  return *new std::vector<int>{0, 0};
}
int main() {
  std::cout << "First program\n";
  return 0;
}
