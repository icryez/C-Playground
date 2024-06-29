#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>

// Leetcode 3.

int lengthOfLongestSubstring(std::string s) {
  std::set<char> *longest_Substring = new std::set<char>;
  int left = 0;
  int size = 0;
  for (int i = 0; i < s.length(); i++) {
    while (longest_Substring->count(s[i])) {
      longest_Substring->erase(s[left]);
      left++;
    }
    longest_Substring->insert(s[i]);
    if (size < longest_Substring->size()) {
      size = longest_Substring->size();
    }
  }
  return size;
}

// Leetcode 2. Add Two Numbers START
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
  int carry = 0;
  ListNode *result = new ListNode();
  ListNode *temp = result;
  while (l1 != nullptr || l2 != nullptr) {
    int val1 = l1 != nullptr ? l1->val : 0;
    int val2 = l2 != nullptr ? l2->val : 0;
    int sum = val1 + val2 + carry;
    carry = sum / 10;
    temp->next = new ListNode(sum % 10);
    temp = temp->next;
    if (l1 != nullptr) {
      l1 = l1->next;
    }
    if (l2 != nullptr) {
      l2 = l2->next;
    }
  }
  if (carry > 0) {
    temp->next = new ListNode(carry);
  }
  return result->next;
}
// Leetcode 2. Add Two Numbers END

// Leetcode 1.Two Sum START
std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> map;
  for (int i = 0; i < nums.size(); i++) {
    if (map.count(target - nums[i]) && map[target - nums[i]] != i) {
      return {i, map[target - nums[i]]};
    }
    map[nums[i]] = i;
  }
  return {0, 0};
}
// Leetcode 1.Two Sum END

int main() {
  std::cout << "First program\n";
  return 0;
}
