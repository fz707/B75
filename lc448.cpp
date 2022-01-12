#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums) {

  int sz = nums.size();
  vector<int> disappear;
  unordered_set<int> s;
  for (auto i : nums) {
    s.insert(i);
  }
  for (int i = 1; i <= sz; i++) {
    if (s.find(i) == s.end())
      disappear.push_back(i);
  }

  return disappear;
}