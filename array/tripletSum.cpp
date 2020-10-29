#include<bits/stdc++.h>
using namespace std;

bool tripletSum(vector<int> &v, int N, int X) {
  sort(v.begin(), v.end());
  int l, r;
  for(int i=0;i<N-2;i++) {
    l = i+1;
    r = N-1;

    while(l < r) {
      int currSum = v[i] + v[l] + v[r];
      if(currSum == X) {
        return true;
      } else if(currSum > X) {
        r--;
      } else {
        l++;
      }
    }
  }
  return false;
}

int main() {
  int T; cin >> T;
  while (T--) {
  	int N, X;
  	cin >> N >> X;
  	vector<int> v(N);
  	for (auto &e : v) {
  		cin >> e;
  	}
  	cout << tripletSum(v, N, X) << endl;
  }
  return 0;
}
