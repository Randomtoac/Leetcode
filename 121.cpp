#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maxProfit(vector<int>& prices);
int main(){
	vector<int> prices = {7,5,2,3};
	cout << maxProfit(prices) << endl;
	return 0;
}
int maxProfit(vector<int>& prices) {
	int maxp = 0;
	int minp = prices[0];
	for (int i = 1; i < prices.size(); i++){
		maxp = max(maxp, prices[i] - minp);
		minp = min(minp, prices[i]);
	}
	return maxp;
}
