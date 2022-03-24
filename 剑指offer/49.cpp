#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int nthUglyNumber(int n);
int main(){

	return 0;
}
int nthUglyNumber(int n){
	vector<int> dp(n, 1);
	int mod2 = 0, mod3 = 0, mod5 = 0;
	for (int i = 1; i < n; i++){
		dp[i] = min(min(dp[mod2]*2, dp[mod3]*3), dp[mod5]*5);
		if (dp[i] == dp[mod2]*2)	mod2++;
		if (dp[i] == dp[mod3]*3)	mod3++;
		if (dp[i] == dp[mod5]*5)	mod5++;
	}
	return dp[n-1];
}
