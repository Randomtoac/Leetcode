#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maxProfit(vector<int>& prices);
int main(){
	vector<int> prices = {1,2,3,0,2};
	cout << maxProfit(prices) << endl;
	return 0;
}
int maxProfit(vector<int>& prices) {
	int dp[prices.size()][3];
	dp[0][0] = -prices[0];
	dp[0][1] = 0;
	dp[0][2] = 0;
	for (int i = 1; i < prices.size(); i++){
		dp[i][0] = max(dp[i-1][0], dp[i-1][2]-prices[i]);
		dp[i][1] = dp[i-1][0] + prices[i];
		dp[i][2] = max(dp[i-1][1], dp[i-1][2]);
	}
	return max(dp[prices.size()-1][1], dp[prices.size()-1][2]);
}
