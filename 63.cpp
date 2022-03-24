#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
int main(){
	
	return 0;
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
	int m = obstacleGrid.size(), n = obstacleGrid[0].size();
	vector<vector<int>> dp(m, vector<int>(n, 0));
	for (int i = 0; i < n; i++){
		if (obstacleGrid[0][i] == 0)	dp[0][i] = 1;
		else break;
	}
	for (int i = 0; i < m; i++){
		if (obstacleGrid[i][0] == 0)	dp[i][0] = 1;
		else break;
	}
	for (int i = 1; i < m; i++){
		for (int j = 1; j < n; j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
			if (obstacleGrid[i][j])	dp[i][j] = 0;
		}
	}
	return dp[m-1][n-1];
}
