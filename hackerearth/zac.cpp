/*
Bishu went to fight for Coding Club. There were N soldiers with various powers. There will be Q rounds to fight and in each round Bishu's power will be varied. With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M). After each round, All the soldiers who are dead in previous round will reborn.Such that in each round there will be N soldiers to fight. As Bishu is weak in mathematics, help him to count the number of soldiers that he can kill in each round and total sum of their powers.

1<=N<=10000

1<=power of each soldier<=100

1<=Q<=10000

1<=power of bishu<=100

Problem link - https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/
*/

#include <bits/stdc++.h>
using namespace std;

long long sum(vector<int> v, int R)
{
	long long sum = 0, L = 0;
	for (int i = L; i <= R; i++)
	{
		sum += v[i];
	}
	return sum;
}

int findUpperBound(vector<int> v, int key)
{
	int L = 0, R = v.size() - 1;
	int ans = v.size();
	while (L <= R)
	{
		int mid = L + (R - L) / 2;

		if (v[mid] > key)
		{
			ans = mid;
			R = mid - 1;
		}
		else
		{
			L = mid + 1;
		}
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif

	int N;
	cin >> N;
	vector<int> powers(N);
	for (auto &power : powers)
	{
		cin >> power;
	}
	sort(powers.begin(), powers.end());
	int rounds;
	cin >> rounds;
	while (rounds--)
	{
		int power_of_bishu;
		cin >> power_of_bishu;

		int fightWon = findUpperBound(powers, power_of_bishu);
		long long total_sum = sum(powers, fightWon - 1);
		cout << fightWon << " " << total_sum << "\n";
	}
}