#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int islandPerimeter(vector<vector<int>>& grid);
int main(){

	return 0;
}
int islandPerimeter(vector<vector<int>>& grid){
	int ret = 0, m = grid.size(), n = grid[0].size();
	const int dir[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (!grid[i][j])	continue;
			for (auto [x, y] : dir){
				if (i+x < 0 || i+x >= m || j+y < 0 || j+y >= n || !grid[i+x][j+y])	
					ret++;
			}
		}
	}
	return ret;
}
