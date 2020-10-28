#include<bits/stdc++.h>
using namespace std;

int chocolateDistribution(vector<int>&v, int N, int M) {
    if(N == 0 || M == 0)
        return 0;
    if(N < M)
        return -1;

    sort(v.begin(), v.end());

    int ans = INT_MAX;
    for(int i=0; i+M-1 < N; i++) {
        int diff = v[i+M-1] - v[i];
        ans = min(ans, diff);
    }
    return ans;
}

int main()
 {
	int T; cin >> T;
	while(T--) {
	    int N; cin >> N;
	    vector<int> chocolates(N);
	    for(auto &c : chocolates) {
	        cin >> c;
	    }
	    int m; cin >> m;
	    cout << chocolateDistribution(chocolates, N, m) << endl;
	}
	return 0;
}
