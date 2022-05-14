#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool narcissistic(int value) {
  // Code away
  vector<int> nums;
  int x = value;
  while (x) {
    nums.push_back(x % 10);
    x /= 10;
  }
  int sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum += (pow(nums[i], nums.size()));
  }
  if (sum == value) {
    return true;
  }
  return false;
}

int main(int argc, char const *argv[]) {
  int val = 153;
  bool x = narcissistic(val);
  if (x) {
    cout << "true" << endl;
  }
  return 0;
}
