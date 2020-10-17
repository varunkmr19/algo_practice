#include<bits/stdc++.h>
using namespace std;

// Kadane's Algorithm
int maximum_sum_subarray(vector<int> &v, int N) {
    int ans = v[0], sum = 0;
    for(int i=0;i<N;i++) {
        sum += v[i];
        ans = max(sum, ans);
        sum = max(sum, 0);
    }
    return ans;
}

int main()
 {
	int T; cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    vector<int>v(N);
	    for(auto &x : v) {
	        cin >> x;
	    }
	    cout << maximum_sum_subarray(v,N) << endl;
	}
	return 0;
}
