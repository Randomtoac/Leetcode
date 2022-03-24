#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int cuttingRope(int n);
int main(){

	return 0;
}
int cuttingRope(int n){
	vector<int> dp(n+1, 1);
	for (int i = 3; i <= n; i++){
		for (int j = 1; j < i; j++){
			dp[i] = max(max(dp[j]*(i-j), dp[i]), (i-j)*j);
		}
	}
	return dp[n];
}
