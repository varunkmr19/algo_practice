#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  vector<vector<int>> merged_intervals;

  if(intervals.size() == 0) {
    return intervals;
  }
  sort(intervals.begin(), intervals.end());
  vector<int> temp_interval = intervals[0];

  for(auto it : intervals) {
    if(it[0] <= temp_interval[1]) {
      temp_interval[1] = max(temp_interval[1], it[1]);
    } else {
      merged_intervals.push_back(temp_interval);
      temp_interval = it;
    }
  }
  merged_intervals.push_back(temp_interval);

  return merged_intervals;
}

int main() {
  vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
  vector<vector<int>> merged_intervals = merge(intervals);
  for(auto const it : merged_intervals) {
    cout << "[" << it[0] << ", " << it[1] << "]" << endl;
  }
}
