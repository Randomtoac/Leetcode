#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class NumMatrix {
private:
	vector<vector<int>> presum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
    	int m = matrix.size(), n = matrix[0].size();
    	presum.resize(m+1, vector<int>(n+1, 0));
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				presum[i+1][j+1] = presum[i][j+1] + presum[i+1][j] - presum[i][j] + matrix[i][j];
			}
		}
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
		return presum[row2][col2] - presum[row2][col1-1] - presum[row1-1][col2] + presum[row1-1][col1-1];
    }
};
int main(){

	return 0;
}
