#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void setZeroes(vector<vector<int>>& matrix);
int main(){
	vector<vector<int>> mat = {{1,1,1},{1,0,1},{1,1,1}};
	setZeroes(mat);
	for (int i = 0; i < mat.size(); i++){
		for (int j = 0; j < mat[0].size(); j++){
			cout << mat[i][j] << " "; 
		}
		cout << endl;
	}
	return 0;
}
void setZeroes(vector<vector<int>>& matrix) {
	int m = matrix.size(), n = matrix[0].size();
	bool m0 = false, n0 = false;
	for (int i = 0; i < m; i++){
		if (matrix[i][0] == 0)	n0 = true;
	}
	for (int i = 0; i < n; i++){
		if (matrix[0][i] == 0)	m0 = true;
	}
	for (int i = 1; i < m; i++){
		for (int j = 1; j < n; j++){
			if (matrix[i][j] == 0){
				matrix[0][j] = 0;
				matrix[i][0] = 0;
			}
		} 
	}
	for (int i = 1; i < m; i++){
		if (matrix[i][0] == 0){
			for (int j = 1; j < n; j++){
				matrix[i][j] = 0;
			}
		}
	}
	for (int j = 1; j < n; j++){
		if (matrix[0][j] == 0){
			for (int i = 1; i < m; i++){
				matrix[i][j] = 0;
			}
		}
	}
	if (m0){
		for (int i = 0; i < n; i++)	matrix[0][i] = 0;
	}
	if (n0){
		for (int i = 0; i < m; i++)	matrix[i][0] = 0;
	}
}
