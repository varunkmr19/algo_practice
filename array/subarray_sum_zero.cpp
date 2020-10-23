#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;

bool subArraySumZero(VI &v)
{
	unordered_set<int> s;
	int sum = 0;
	for (auto const x : v)
	{
		sum += x;
		if (sum == 0 || s.find(sum) != s.end())
			return true;

		s.insert(sum);
	}
	return false;
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	VI v = {1, 4, -2, -2, 5, -4, 3};
	cout << subArraySumZero(v);
}
