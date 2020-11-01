#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
  int r = s.size()-1;
  int l = 0;
  while(l<r){
    swap(s[l++], s[r--]);
  }
}

int main() {
  vector<char>s = {'h','e','l','l','o'};
  cout << "Original String: ";
  for(auto const c : s) {
    cout << c << " ";
  }
  cout << "\n";
  reverseString(s);
  cout << "Reversed String: ";
  for(auto const c : s) {
    cout << c << " ";
  }
  return 0;
}
