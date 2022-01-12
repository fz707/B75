#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
  int missingNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int sz = nums.size();
    if (nums[0] != 0) {
      return 0;
    }
    int m = nums[sz - 1] + 1;
    for (int i = 0; i < sz - 1; i++) {
      if (nums[i + 1] != nums[i] + 1)
        m = nums[i] + 1;
    }

    return m;
  }
};

int main(int argc, char const *argv[]) { return 0; }
