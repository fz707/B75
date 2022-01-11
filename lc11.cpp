#include <algorithm>
#include <iostream>

#include <limits.h>
#include <stdio.h>
#include <vector>
using namespace std;

int maxArea(vector<int> &height) {
  int left = 0, maxA = 0;
  int right = height.size() - 1;
  while (left < right) {

    if (height[left] <= height[right]) {
      maxA = max(maxA, (right - left) * height[left]);
      left += 1;
    } else {
      maxA = max(maxA, (right - left) * height[right]);
      right -= 1;
    }
  }
  return maxA;
}
int main(int argc, char const *argv[]) { return 0; }
