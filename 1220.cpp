#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countVowelPermutation(int n);
int main(){

	return 0;
}
const int modulus = 10e9 + 7;
int countVowelPermutation(int n){
	vector<vector<long long>> dp(n, vector<long long>(5, 1));
	for (int i = 1; i < n; i++){
		dp[i][0] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][4]) % modulus;
		dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % modulus;
		dp[i][2] = (dp[i-1][1] + dp[i-1][3]) % modulus;
		dp[i][3] = dp[i-1][2] % modulus;
		dp[i][4] = (dp[i-1][2] + dp[i-1][3]) % modulus;
	}
	long long ret = 0;
	for (int j = 0; j < 5; j++){
		ret += dp[n-1][j];
		ret %= modulus;
	}
	return (int)ret;
}
