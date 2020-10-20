#include <bits/stdc++.h>
using namespace std;

/*
* Algo - Quick Select
* Time - theta(N), O(N^2)
* Space - O(1)
*/

int partition(vector<int> &v, int l, int r)
{
	int pivot = v[r], index = l;
	for (int i = l; i <= r - 1; i++)
	{
		if (v[i] <= pivot)
		{
			swap(v[index], v[i]);
			index++;
		}
	}
	swap(v[index], v[r]);
	return index;
}

int kMin(vector<int> v, int l, int r, int k)
{
	int pIndex = partition(v, l, r);
	if (k > pIndex)
	{
		return kMin(v, pIndex + 1, r, k);
	}
	else if (k < pIndex)
	{
		return kMin(v, l, pIndex - 1, k);
	}
	else
	{
		return v[pIndex];
	}
}

int kMax(vector<int> v, int l, int r, int k)
{
	int pIndex = partition(v, l, r);
	k = v.size() - (k + 1);
	if (k > pIndex)
	{
		return kMax(v, pIndex + 1, r, k);
	}
	else if (k < pIndex)
	{
		return kMax(v, l, pIndex - 1, k);
	}
	else
	{
		return v[pIndex];
	}
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
	vector<int> v(N);
	for (auto &x : v)
	{
		cin >> x;
	}
	int K;
	cin >> K;
	cout << kMin(v, 0, v.size() - 1, K - 1) << endl;
	cout << kMax(v, 0, v.size() - 1, K - 1);

#endif
}
