#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
  int l = 0, r = s.length()-1;
  while(l < r) {
    if(isalnum(s[l]) > 0 && isalnum(s[r]) > 0) {
      if(tolower(s[l++]) != tolower(s[r--])) {
        return false;
      }
    } else if(isalnum(s[l]) == 0) {
      l++;
    } else {
      r--;
    }
  }
  return true;
}

int main() {
  string s = "race a car";
  cout << isPalindrome(s);
  return 0;
}
