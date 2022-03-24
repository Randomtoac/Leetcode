#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int change(int amount, vector<int>& coins);
int main(){
	int amount = 5;
	vector<int> coins = {1, 2, 5};
	cout << change(amount, coins) << endl;
	return 0;
}
int change(int amount, vector<int>& coins){
	vector<int> dp(amount+1, 0);
	dp[0] = 1;
	for (int j = 0; j < coins.size(); j++){
		for (int i = 1; i <= amount; i++){
			if (i - coins[j] >= 0){
				dp[i] += dp[i-coins[j]];
			}
		}
	}
	return dp[amount];
}
