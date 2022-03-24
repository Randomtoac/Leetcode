#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maximalSquare(vector<vector<char>>& matrix);
int main(){

	return 0;
}
int maximalSquare(vector<vector<char>>& matrix){
	if (matrix.size() == 0 || matrix[0].size() == 0)	return 0;
	int m = matrix.size(), n = matrix[0].size(), ret = 0;
	vector<vector<int>> dp(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (matrix[i][j] == '0')	dp[i][j] = 0;
			else{
				if ((!i || !j))	dp[i][j] = 1;
				else	dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
				ret = max(ret, dp[i][j]);
			}
		}
	}
	return ret*ret;
}
