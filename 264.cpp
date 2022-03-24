#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int nthUglyNumber(int n);
int main(){
	for (int i = 1; i < 21; i++)	cout << nthUglyNumber(i) << endl;
	return 0;
}
int nthUglyNumber(int n){
	vector<int> dp(1690, 0);
	dp[0] = 1;
	int t2 = 0, t3 = 0, t5 = 0;
	for (int i = 1; i < 1690; i++){
		dp[i] = dp[i-1];
		while (dp[i] == dp[i-1]){
			dp[i] = min(min(dp[t2]*2, dp[t3]*3), dp[t5]*5);
			if (dp[i] == dp[t2]*2)	t2++;
			else if (dp[i] == dp[t3]*3)	t3++;
			else	t5++;
		}	
	}
	return dp[n-1];
}
