#include <bits/stdc++.h>
using namespace std;

int find_union(vector<int> v1, vector<int> v2)
{
	unordered_set<int> s;
	vector<int> ans;
	for (auto const x : v1)
	{
		s.insert(x);
	}
	for (auto const x : v2)
	{
		s.insert(x);
	}
	return s.size();
}

int main()
{
	vector<int> v1{85, 25, 1, 32, 54, 6};
	vector<int> v2{85, 2};
	cout << find_union(v2,v2);
}
