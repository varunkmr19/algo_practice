#include<bits/stdc++.h>
using namespace std;

// Check whether a string is a valid shuffle of two strings or not
bool shuffleCheck(string s1, string s2, string res) {
  if(s1.length() + s2.length() != res.length())
    return false;
  int i=0, j=0, k=0;
  while(k != res.length()) {
    if(i < s1.length() && s1[i] == res[k])
      i++;
    else if(j < s2.length() && s2[j] == res[k])
      j++;
    else
      return false;
    k++;
  }
  if(i < s1.length() || j < s2.length())
    return false;
  return true;
}

int main() {
  string s1 = "XY";
  string s2 = "12";
  vector<string> v = {"1XY2", "Y12X"};
  for(auto const s : v) {
    if(shuffleCheck(s1, s2, s) == true)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}
