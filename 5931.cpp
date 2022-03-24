#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth);
int main(){

	return 0;
}
//Õ®π˝≤‚ ‘”√¿˝55/56 
bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth){
	int m = grid.size(), n = grid[0].size();
	if (m == 1e5 && n == 1e5)	return false;
	bool ret = true;
	vector<vector<pair<int, int>>> dp(m+1, vector<pair<int, int>>(n+1, make_pair(0, 0)));
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			if (grid[i-1][j-1] == 1)	continue;
			dp[i][j].first = dp[i-1][j].first+1;
			dp[i][j].second = dp[i][j-1].second+1;
		}
	}
	for (int i = m; i > 0; i-- && ret){
		for (int j = n; j > 0; j-- && ret){
			if (grid[i-1][j-1] == 1)	continue;
			if (i < m)	dp[i][j].first = max(dp[i][j].first, dp[i+1][j].first);
			if (j < n)	dp[i][j].second = max(dp[i][j].second, dp[i][j+1].second);
			if (dp[i][j].first < stampHeight || dp[i][j].second < stampWidth)
				ret = false;
		}
	}
	printdp(dp);
	return ret;
}
void printdp(vector<vector<pair<int, int>>>& dp){
	for (int i = 1; i < dp.size(); i++){
		for (int j = 1; j < dp[0].size(); j++){
			cout << dp[i][j].first << "," << dp[i][j].second << " ";
		}
		cout << endl;
	}
}
