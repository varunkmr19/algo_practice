#include <bits/stdc++.h>
using namespace std;

// Return the max and min element in an array
pair<int, int> find_max_min(vector<int> v)
{
	pair<int, int> max_min;
	max_min.first = INT_MIN;
	max_min.second = INT_MAX;
	for (auto const x : v)
	{
		max_min.first = max(max_min.first, x);
		max_min.second = min(max_min.second, x);
	}
	return max_min;
}

int main()
{
	vector<int> v{0, 1, 2, 3, 4, 5, 9, 22};
	pair<int, int> max_min = find_max_min(v);
	cout << "Max -> " << max_min.first << endl;
	cout << "Min -> " << max_min.second;
}
