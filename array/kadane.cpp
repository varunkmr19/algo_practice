#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> v)
{
	int maxSum = v[0], currSum = 0;
	for (auto const x : v)
	{
		currSum += x;
		maxSum = max(maxSum, currSum);
		if (currSum < 0)
		{
			currSum = 0;
		}
	}
	return maxSum;
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
	int N;
	cin >> N;
	vector<int> v(N);
	for (auto &x : v)
	{
		cin >> x;
	}
	cout << kadane(v);

#endif
}
