#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix);
int main(){

	return 0;
}
vector<int> spiralOrder(vector<vector<int>>& matrix){
	if (!matrix.size())	return {};
	const int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	int m = matrix.size(), n = matrix[0].size();
	int bound[4] = {n-1, m-1, 0, 1};
	int x = 0, y = 0, k = 0, cnt = m * n;
	vector<int> ret;
	while (cnt--){
		ret.push_back(matrix[x][y]);
		if (k & 1){
			if (x == bound[k]){
				bound[k] -= dir[k][0];
				++k %= 4;
			}	
		}
		else{
			if (y == bound[k]){
				bound[k] -= dir[k][1];
				++k %= 4;
			}	
		}
		x += dir[k][0];
		y += dir[k][1];
	}
	return ret;
}
