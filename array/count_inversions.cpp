#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &v, int l, int m, int r)
{
	int inversion = 0;
	int p = l, q = m + 1, k = 0;
	vector<int> a(r - l + 1);
	for (int i = l; i <= r; i++)
	{
		if (p > m)
		{
			a[k++] = v[q++];
		}
		else if (q > r)
		{
			a[k++] = v[p++];
		}
		else if (v[p] < v[q])
		{
			a[k++] = v[p++];
		}
		else
		{
			a[k++] = v[q++];
			inversion = inversion + (m - p + 1);
		}
	}
	for (int i = l; i < k; i++)
	{
		v[l++] = a[i];
	}
	return inversion;
}

int merge_sort(vector<int> &v, int l, int r)
{
	int count_inversion = 0;
	if (l < r)
	{
		int mid = l + (r - l) / 2;
		count_inversion += merge_sort(v, l, mid);
		count_inversion += merge_sort(v, mid + 1, r);

		count_inversion += merge(v, l, mid, r);
	}
	return count_inversion;
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
	vector<int> nums(N);
	for (auto &n : nums)
	{
		cin >> n;
	}
	cout << merge_sort(nums, 0, N - 1);
#endif
}
