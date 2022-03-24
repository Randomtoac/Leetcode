#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int minimumTotal(vector<vector<int>>& triangle);
int main(){
	vector<vector<int>> triangle = {{2},{3,4},{6,5,7},{4,1,8,3}};
	cout << minimumTotal(triangle) << endl;
	return 0;
}
int minimumTotal(vector<vector<int>>& triangle) {
	for (int i = 1; i < triangle.size(); i++){
		triangle[i][0] += triangle[i-1][0];
		triangle[i][triangle[i].size()-1] += triangle[i-1][triangle[i-1].size()-1];
		for (int j = 1; j < triangle[i].size()-1; j++){
			triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
		}
	}
	return *min_element(triangle[triangle.size()-1].begin(), triangle[triangle.size()-1].end());
}
