#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> countBits(int n);
int main(){

	return 0;
}
vector<int> countBits(int n){
	vector<int> dp(n+1, 0);
	for (int i = 1; i <= n; i++){
		dp[i] = dp[i >> 1] + (i & 1);
	}
	return dp;
}
