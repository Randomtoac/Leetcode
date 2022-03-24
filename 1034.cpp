#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color);
void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int color, vector<pair<int, int>>& borders);
int main(){

	return 0;
}
vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color){
	int m = grid.size(), n = grid[0].size();
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	vector<pair<int, int>> borders;
	dfs(grid, visited, row, col, grid[row][col], borders);
	for (auto & [x, y] : borders){
		grid[x][y] = color;
	}
	return grid;
}
void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int color, vector<pair<int, int>>& borders){
	int m = grid.size(), n = grid[0].size();
	if (x < 0 || x >= m || y < 0 || y >= n || visited[x][y] || grid[x][y] != color)	return;
	int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	bool isBorder  = false;
	visited[x][y] = true;
	for (auto & [i, j] : dir){
		int nx = x + i;
		int ny = y + j;
		if (nx < 0 || nx >= m || ny < 0 || ny >= n || grid[nx][ny] != color){
			isBorder = true;
		}
		dfs(grid, visited, nx, ny, color, borders);
	}
	if (isBorder)	borders.push_back(make_pair(x, y));
}
