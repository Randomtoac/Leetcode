#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int minDistance(string word1, string word2);
int main(){

	return 0;
}
int minDistance(string word1, string word2){
	int m = word1.length(), n = word2.length();
	if (m*n == 0)	return m+n;
	vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
	for (int i = 0; i <= m; i++){
		dp[i][0] = i;
	}
	for (int i = 0; i <= n; i++){
		dp[0][i] = i;
	}
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			dp[i][j] = min(min(dp[i][j-1]+1, dp[i-1][j]+1), dp[i-1][j-1] + (word1[i-1] == word2[j-1] ? 0 : 1));
		}
	}
	return dp[m][n];
}
