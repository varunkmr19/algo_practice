#include <bits/stdc++.h>
using namespace std;

vector<int> find_union(vector<int> v1, vector<int> v2)
{
	set<int> s;
	vector<int> ans;
	for (auto const x : v1)
	{
		s.insert(x);
	}
	for (auto const x : v2)
	{
		s.insert(x);
	}
	for (auto const e : s)
	{
		ans.push_back(e);
	}
	return ans;
}

int main()
{
	vector<int> v1{85, 25, 1, 32, 54, 6};
	vector<int> v2{85, 2};
	vector<int> union_array = find_union(v1, v2);
	for (auto const x : union_array)
	{
		cout << x << " ";
	}
}
