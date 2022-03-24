#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxValue(vector<vector<int>>& grid);
int main(){

	return 0;
}
int maxValue(vector<vector<int>>& grid){
	vector<vector<int>> dp(grid.size()+1, vector<int>(grid[0].size()+1, 0));
	for(int i = 0; i < grid.size(); i++){
		for (int j = 0; j < grid[0].size(); j++){
			dp[i+1][j+1] = grid[i][j] + max(dp[i+1][j], dp[i][j+1]);
		}
	} 
	return dp[grid.size()][grid[0].size()];
}
