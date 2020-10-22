#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
  int max_profit = 0, currStockPrice = INT_MAX;
  for(auto const p : prices) {
    if(p < currStockPrice) {
      currStockPrice = p;
    } else {
      max_profit = max(max_profit, p-currStockPrice);
    }
  }
  return max_profit;
}

int main() {
  vector<int> prices = {7,1,5,3,6,4};
  cout << maxProfit(prices);
}
