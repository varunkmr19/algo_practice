// Problem Link - https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

#include <bits/stdc++.h>
using namespace std;

/*
Naive Approch - Sort the array and traverse it to find the missing and repeating element.
Time - O(NlogN)
Space - O(1)
*/
void naive(vector<int> v)
{
}

/*
Better Approch - Use hashing to count frequency of elements. Missing number will have 0, while the repeating number's frequency will be greater than 1.
Time - O(N)
Space - O(N)
*/
void better(vector<int> v)
{
  int rep, mis;
  map<int, int> freq_count;
  for (auto const x : v)
  {
    freq_count[x]++;
  }
  for (auto e : freq_count)
  {
    if (e.second > 1)
    {
      rep = e.first;
    }
    if (e.second == 0)
    {
      mis = e.first;
    }
  }

  cout << "Missing: " << mis << " Repeating: " << rep;
}

int main()
{
  vector<int> v = {7, 3, 4, 5, 5, 6, 2};
  better(v);
  return 0;
}