#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums) {
  int sz = nums.size();
  int loc = 0;
  int max2 = INT_MIN;
  for (int i = 0; i < sz; i++) {

    loc = max(nums[i], loc + nums[i]);
    if (loc > max2)
      max2 = loc;
  }

  return max2;
}

int main(int argc, char const *argv[]) { return 0; }
