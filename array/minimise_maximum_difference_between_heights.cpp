#include <bits/stdc++.h>
using namespace std;
#define ll long long

int getMinDiff(int arr[], int n, int k)
{
	if (n == 1)
		return 0;
	sort(arr, arr + n);

	int ans = arr[n - 1] - arr[0];
	int small = arr[0] + k;
	int big = arr[n - 1] - k;
	if (small > big)
	{
		swap(small, big);
	}

	for (int i = 1; i < n - 1; i++)
	{
		int sub = arr[i] - k;
		int add = arr[i] + k;

		if (sub >= small || add <= big)
			continue;
		if (big - sub <= add - small)
		{
			small = sub;
		}
		else
		{
			big = add;
		}
	}
	return min(ans, big - small);
}

int main()
{
	int arr[5] = {27, 29, 28, 23};
	cout << getMinDiff(arr, 4, 3);
}
