#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k);
int main(){
	vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
	vector<vector<int>> dp = matrixBlockSum(mat, 2);
	for (int i = 0; i < dp.size(); i++){
		for (int j = 0; j < dp[0].size(); j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k){
	int m = mat.size(), n = mat[0].size();
	vector<vector<int>> presum(m+1, vector<int>(n+1, 0));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			presum[i+1][j+1] = presum[i][j+1] + presum[i+1][j] - presum[i][j] + mat[i][j];
		}
	}
	vector<vector<int>> dp(m, vector<int>(n));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			int up = i - k > 0 ? i - k : 0;
			int down = i + k < m ? i + k + 1 : m;
			int left = j - k > 0 ? j - k : 0;
			int right = j + k < n ? j + k + 1 : n;
			dp[i][j] = presum[down][right] - presum[down][left] - presum[up][right] + presum[up][left];
		}
	}
	return dp;
}
