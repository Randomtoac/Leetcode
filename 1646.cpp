#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int getMaximumGenerated(int n);
int main(){

	return 0;
}
int getMaximumGenerated(int n){
	if (!n) return 0;
    vector<int> dp(n+1, 0);
    dp[1] = 1;
    int ret = 1;
    for (int i = 2; i <= n; i++){
        dp[i] = dp[i/2];
        if (i&1)	dp[i] += dp[i/2+1];
        ret = max(ret, dp[i]);
    }
    return ret;
}
