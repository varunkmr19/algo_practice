// Problem Link - https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>
using namespace std;

// Time - O(N), space - O(1)
void sortColors(vector<int> &nums)
{
  int L = 0, mid = 0, R = nums.size() - 1;
  while (mid <= R)
  {
    switch (nums[mid])
    {
    case 0:
      swap(nums[L], nums[mid]);
      L++;
      mid++;
      break;
    case 1:
      mid++;
      break;
    case 2:
      swap(nums[mid], nums[R]);
      R--;
      break;
    }
  }
}

int main()
{
  vector<int> nums = nums = {2, 0, 2, 1, 1, 0};
  sortColors(nums);
  for (auto const n : nums)
  {
    cout << n << " ";
  }
  return 0;
}