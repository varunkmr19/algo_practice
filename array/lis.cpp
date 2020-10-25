#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;

int lis(VI v)
{
	vector<int> seq;
	seq.push_back(v[0]);
	for (int i = 1; i < v.size(); i++)
	{
		if (seq.back() < v[i])
		{
			seq.push_back(v[i]);
		}
		else
		{
			int lbi = lower_bound(seq.begin(), seq.end(), v[i]) - seq.begin();
			seq[lbi] = v[i];
		}
	}
	return seq.size();
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	vector<int> v = {10, 9, 2, 5, 3, 7, 101, 18};
	cout << lis(v);
}
