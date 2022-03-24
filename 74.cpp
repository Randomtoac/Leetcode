#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target);
int main(){

	return 0;
}
bool searchMatrix(vector<vector<int>>& matrix, int target){
	int m = matrix.size(), n = matrix[0].size();
	for (int i = m-1, j = 0; i >= 0 && j < n;){
		if (matrix[i][j] == target)	return true;
		if (matrix[i][j] < target)	j++;
		else	i--;
	}
	return false;
}
