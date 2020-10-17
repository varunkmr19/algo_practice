#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &v)
{
	int e = v[v.size() - 1];
	for (int i = v.size() - 1; i > 0; i--)
	{
		v[i] = v[i - 1];
	}
	v[0] = e;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (auto &x : v)
		{
			cin >> x;
		}
		rotate(v);
		for (auto const x : v)
		{
			cout << x << " ";
		}
		cout << "\n";
	}
}
