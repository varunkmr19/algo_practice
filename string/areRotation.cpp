#include<bits/stdc++.h>
using namespace std;

bool areRotation(string s1, string s2) {
  if(s1.length() != s2.length())
    return false;
  string temp = s1 + s1;
  return (temp.find(s2) != string::npos);
}

int main() {
  string s1 = "ABACD";
  string s2 = "CDABA";
  cout << areRotation(s1, s2);
}
