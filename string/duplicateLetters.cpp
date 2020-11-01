#include<bits/stdc++.h>
using namespace std;

void dupliate_count(string s) {
  map<char, int>mp;
  for(auto const ch : s) {
    mp[ch]++;
  }
  for(auto it : mp) {
    if(it.second > 1)
      cout << it.first << " " << it.second << endl;
  }
}

int main() {
  string s = "bcabc";
  dupliate_count(s);
  return 0;
}
