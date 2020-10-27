#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> &heights) {
  if(!heights.size())
    return 0;

  int count = 0, left_index = 0, right_index = heights.size() - 1;
  int max_left = heights[left_index], max_right = heights[right_index];

  while(left_index != right_index) {
    if(max_left < max_right) {
      count += max_left - heights[left_index];
      left_index++;
      max_left = max(max_left, heights[left_index]);
    } else {
      count += max_right - heights[right_index];
      right_index--;
      max_right = max(max_right, heights[right_index]);
    }
  }
  return count;
}

int main() {
  int T; cin >> T;
  while(T--) {
    int N; cin >> N;
    vector<int>heights(N);
    for(auto &h : heights) {
        cin >> h;
    }
    cout << trap(heights) << endl;
  }
  return 0;
}
