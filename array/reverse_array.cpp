#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{0, 1, 2, 3, 4, 5, 9, 22};
	int start = 0, end = v.size() - 1;
	while (start < end)
	{
		swap(v[start++], v[end--]);
	}
	for (auto const x : v)
	{
		cout << x << " ";
	}
}
