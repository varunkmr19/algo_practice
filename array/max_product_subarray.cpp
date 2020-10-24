#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
  int currProd = 1, maxProd = INT_MIN;
  for(auto const n : nums) {
    currProd *= n;
    maxProd = max(maxProd, currProd);
    if(currProd == 0)
        currProd = 1;
  }
  currProd = 1;
  for(int it = nums.size()-1;it>=0;it--) {
    currProd *= nums[it];
    maxProd = max(maxProd, currProd);
    if(currProd == 0)
        currProd = 1;
  }
  return maxProd;
}

int main() {
  vector<int> v = {2,3,-2,4};
  cout << maxProduct(v);
}
