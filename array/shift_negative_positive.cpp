#include <bits/stdc++.h>
using namespace std;

// Move all negative numbers to beginning and positive to end
void rearange(vector<int> &v)
{
	int l = 0, r = v.size() - 1;
	while (l <= r)
	{
		if (v[l] < 0 && v[r] < 0)
		{
			l++;
		}
		else if (v[l] > 0 && v[r] < 0)
		{
			swap(v[l], v[r]);
		}
		else if (v[l] > 0 && v[r] > 0)
		{
			r++;
		}
		else
		{
			l++;
			r--;
		}
	}
}

int main()
{
	vector<int> v{-12, 11, -13, -5, 6, -7, 5, -3, -6};
	rearange(v);
	for (auto const x : v)
	{
		cout << x << " ";
	}
}
