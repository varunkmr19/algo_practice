#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
	int n = nums.size(), k, l;
	for (k = n - 2; k >= 0; k--)
	{
		if (nums[k] < nums[k + 1])
		{
			break;
		}
	}
	if (k < 0)
	{
		reverse(nums.begin(), nums.end());
	}
	else
	{
		for (l = n - 1; l > k; l--)
		{
			if (nums[l] > nums[k])
			{
				break;
			}
		}
		swap(nums[k], nums[l]);
		reverse(nums.begin() + k + 1, nums.end());
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
	vector<int> nums = {1, 2, 3};
	nextPermutation(nums);
	for (auto const &n : nums)
	{
		cout << n << " ";
	}

#endif
}
