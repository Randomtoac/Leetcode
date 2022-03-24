#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maxProfit(vector<int>& prices, int fee);
int main(){
	vector<int> prices = {1,3,7,5,10,3};
	int fee = 3;
	cout << maxProfit(prices, fee) << endl;
	return 0;
}
int maxProfit(vector<int>& prices, int fee) {
	int dp[prices.size()][2];
	dp[0][0] = -prices[0];
	dp[0][1] = 0;
	for (int i = 1; i < prices.size(); i++){
		dp[i][0] = max(dp[i-1][0], dp[i-1][1] - prices[i]);
		dp[i][1] = max(dp[i-1][1], dp[i-1][0] + prices[i] - fee);
	}
	return dp[prices.size()-1][1];
}
