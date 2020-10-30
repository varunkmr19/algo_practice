#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;

void threeWayPartition(VI &v, int a, int b)
{
	int n = v.size();
	int start = 0, end = n - 1;

	for (int i = 0; i <= end;)
	{
		if (v[i] < a)
		{
			swap(v[i++], v[start++]);
		}
		else if (v[i] > b)
		{
			swap(v[i], v[end--]);
		}
		else
		{
			i++;
		}
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	VI v = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
	int lowVal = 14, highVal = 20;
	threeWayPartition(v, lowVal, highVal);
	for (auto const e : v)
	{
		cout << e << " ";
	}
}
