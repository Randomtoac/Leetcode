#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int integerBreak(int n);
int main(){

	return 0;
}
int integerBreak(int n){
	vector<int> dp(n+1, 1);
	for (int i = 2; i <= n; i++){
		for (int j = 1; j < i; j++){
			dp[i] = max(max(dp[i], dp[i-j]*j), (i-j)*j);
		}
	}
	return dp[n];
}
