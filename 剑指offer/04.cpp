#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target);
int main(){

	return 0;
}
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target){
	if (matrix.empty())	return false;
	int m = matrix.size(), n = matrix[0].size();
	for (int i = m - 1, j = 0; i >= 0 && j < n;){
		if (matrix[i][j] == target)	return true;
		else if (matrix[i][j] < target)	j++;
		else	i--;
	}
	return false;
}
