#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void rotate(vector<vector<int>>& matrix);
int main(){

	return 0;
}
void rotate(vector<vector<int>>& matrix){
	int n = matrix.size();
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= (n-1)/2; j++){
			swap(matrix[i][j], matrix[i][n-j-1]);
		}
	}
}
