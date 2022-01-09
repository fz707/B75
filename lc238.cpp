#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int sz = nums.size();
    vector<int> ans(sz);
    vector<int> L(sz);
    vector<int> R(sz);
    L[0] = 1;
    R[sz - 1] = 1;
    for (int i = 1; i < sz; i++) {
      L[i] = L[i - 1] * nums[i - 1];
    }
    for (int i = sz - 2; i >= 0; i--) {
      R[i] = R[i + 1] * nums[i + 1];
    }
    transform(L.begin(), L.end(), R.begin(), ans.begin(),
              std::multiplies<int>());
    return ans;
  }
};
