#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  int n = nums.size();
  if (nums.size() == 1) {
    return nums[0];
  }
  for (int i = 0; i < nums.size(); i += 2) {
    if (nums[i] != nums[i + 1])
      return nums[i];
  }
  return nums[n - 1];
}
