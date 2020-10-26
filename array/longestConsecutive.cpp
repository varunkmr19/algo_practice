#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
  set<long long> s;
  for(int n : nums) {
    s.insert(n);
  }
  int ans = 0;
  for(long long n : nums) {
    if(!s.count(n-1)) {
      long long currentNum = n;
      int currentStreak = 1;

      while(s.count(currentNum+1)) {
        currentNum++;
        currentStreak++;
      }

      ans = max(ans, currentStreak);
    }
  }
  return ans;
}

int main() {
  vector<int> v = {0,3,7,2,5,8,4,6,0,1};
  cout << longestConsecutive(v);
}
