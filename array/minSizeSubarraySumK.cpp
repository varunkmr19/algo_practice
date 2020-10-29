#include<bits/stdc++.h>
using namespace std;

int minSubarrayLen(vector<int> &v, int N, int X) {
    if(!N)
        return 0;

    int min_length = INT_MAX;
    int currWindowSum = 0;
    int windowStart = 0;

    for(int windowEnd = 0; windowEnd < N; windowEnd++) {
        currWindowSum += v[windowEnd];

        while(currWindowSum >= X) {
            min_length = min(min_length, windowEnd - windowStart + 1);
            currWindowSum -= v[windowStart];
            windowStart++;
        }
    }
    return min_length != INT_MAX ? min_length : 0;
}

using namespace std;
int main()
 {
	int T; cin >> T;
	while(T--) {
	    int N, X;
	    cin >> N >> X;
	    vector<int>vec(N);
	    for(auto &v : vec) {
	        cin >> v;
	    }
	    cout << minSubarrayLen(vec, N, X) << endl;
	}
	return 0;
}
