#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> luckyNumbers (vector<vector<int>>& matrix);
int main(){

	return 0;
}
vector<int> luckyNumbers (vector<vector<int>>& matrix){
	int m = matrix.size(), n = matrix[0].size();
	vector<int> minrow(m, 100001), maxcol(n, 0);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			minrow[i] = min(minrow[i], matrix[i][j]);
			maxcol[j] = max(maxcol[j], matrix[i][j]);
		}
	}
	vector<int> ret;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (matrix[i][j] == minrow[i] && matrix[i][j] == maxcol[j]){
				ret.push_back(matrix[i][j]);
			}
		}
	}
	return ret;
}
