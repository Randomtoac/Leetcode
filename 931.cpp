#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int minFallingPathSum(vector<vector<int>>& matrix);
int main(){
	vector<vector<int>> m = {{2,1,3}, {6,5,4}, {7,8,9}};
	cout << minFallingPathSum(m) << endl;
	return 0;
}
int minFallingPathSum(vector<vector<int>>& matrix){
	int n = matrix.size();
	if (n == 1)	return matrix[0][0];
	for (int i = 1; i < n; i++){
		matrix[i][0] += min(matrix[i-1][0], matrix[i-1][1]);
		matrix[i][n-1] += min(matrix[i-1][n-2], matrix[i-1][n-1]);
		for (int j = 1; j < n-1; j++){
			matrix[i][j] += min(min(matrix[i-1][j-1], matrix[i-1][j]), matrix[i-1][j+1]);
		}
	}
	return *min_element(matrix[n-1].begin(), matrix[n-1].end());
}
