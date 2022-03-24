#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int modulo = 1000000007;

int numWays(int steps, int arrLen) {
	int maxc = min(steps, arrLen-1);
	vector<vector<int>> dp(steps+1, vector<int>(maxc+1));
	dp[0][0] = 1;
	for (int i = 1; i <= steps; i++){
		for (int j = 0; j <= maxc; j++){
			dp[i][j] = dp[i-1][j];
			if (j-1 >= 0){
				dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % modulo;
			}
			if (j+1 <= maxc){
				dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % modulo;
			}
			dp[i][j] %= modulo;
		}
	}
	return dp[steps][0];
}

int main(){
	int s = 4, l = 2;
	int out = numWays(s, l);
	cout << out << endl;

	return 0;
}

