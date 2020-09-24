#include <bits/stdc++.h>
using namespace std;

int search(vector<int> v, int target)
{
  int L = 0, R = v.size() - 1;
  while (L <= R)
  {
    int mid = L + (R - L) / 2;
    if (v[mid] == target)
    {
      return mid;
    }
    else if (v[mid] > target)
    {
      R = mid - 1;
    }
    else
    {
      L = mid + 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> vec{-1, 2, 3, 5, 7, 8, 10, 23, 345};
  int key = 5;
  cout << search(vec, key);
}