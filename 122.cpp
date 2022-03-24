#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maxProfit(vector<int>& prices);
int main(){
	vector<int>  p = {5};
	cout << maxProfit(p) << endl;
	return 0;
}
int maxProfit(vector<int>& prices) {
	int pre = prices[0], ret = 0;
	for (int i = 1; i < prices.size(); i++){
		if (prices[i] > pre)	ret += prices[i]-pre;
		pre = prices[i];
	}
	return ret;
}
