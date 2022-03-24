#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c);
int main(){
	vector<vector<int>> mat = {{1,2}, {3,4}};
	int r = 2, c = 4;
	vector<vector<int>> res = matrixReshape(mat, r, c);
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
	int m = mat.size(), n = mat[0].size(); 
	if (r*c != m*n)	return mat;
	vector<vector<int>> ret(r, vector<int>(c));
	int k = 0, l = 0;
	for (int i = 0, j = 0; j < m;){
		ret[k][l++] = mat[j][i++];
		if (l == c){
			k++;
			l = 0;
		}
		if (i == n){
			j++;
			i = 0;
		}
	}
	return ret;
}
