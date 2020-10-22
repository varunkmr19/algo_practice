#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
  // count frequency
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++) {
    mp[arr[i]]++;
  }

  int ans = 0;
  for(int i=0;i<n;i++) {
    if(mp.count(k-arr[i])) {
      if((k-arr[i]) == arr[i]) {
        mp[arr[i]]--;
        ans += mp[(k-arr[i])];
      } else {
        ans += mp[(k-arr[i])];
        mp[arr[i]]--;
      }
    }
  }
  return ans;
}

int main() {
  int N = 4, K = 6;
  vector<int> v = {1, 5, 7, 1};
  cout << getPairsCount(v, N, K);
}
