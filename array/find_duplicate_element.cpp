/*
	Problem link - https://leetcode.com/problems/find-the-duplicate-number/
*/

#include <bits/stdc++.h>
using namespace std;

// Navive solution {Time: O(nlogn), space: O(1)}
int findDuplicateNumberNavive(vector<int> v)
{
	int ans;
	// sort the array and traverse to find duplicate element
	sort(v.begin(), v.end());
	int prev = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == prev)
		{
			ans = prev;
			break;
		}
		else
		{
			prev = v[i];
		}
	}
	return ans;
}

// Optimal solution

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	vector<int> t1{1, 3, 4, 2, 2};
	vector<int> t2{3, 1, 3, 4, 2};

	cout << findDuplicateNumberNavive(t1);
}