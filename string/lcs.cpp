#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string &text1, string &text2) {
  int m = text1.size(), n = text2.size();
  vector<vector<short>> v(m + 1, vector<short>(n + 1));

  for (auto i = 1; i <= m; ++i)
    for (auto j = 1; j <= n; ++j)
      if (text1[i - 1] == text2[j - 1])
          v[i][j] = v[i - 1][j - 1] + 1;
      else
          v[i][j] = max(v[i - 1][j], v[i][j - 1]);

  return v[m][n];
}

int main() {
  string text1 = "abcde";
  string text2 = "ace";

  cout << longestCommonSubsequence(text1, text2);
}
