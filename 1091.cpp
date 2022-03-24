#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
int shortestPathBinaryMatrix(vector<vector<int>>& grid);
int main(){

	return 0;
}
int shortestPathBinaryMatrix(vector<vector<int>>& grid){
	int n = grid.size();
	if (!n || grid[0][0] + grid[n-1][n-1])	return -1;
	queue<pair<int, int>> q;
	q.push({0,0});
	grid[0][0] = 1;
	int ret = 1, cnt = 1;
	const vector<pair<int, int>> dir = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, 
									 {0, 1}, {1, -1}, {1, 0}, {1, 1}};
	while (!q.empty()){
		int x = q.front().first, y = q.front().second;
		q.pop();
		cnt--;
		if (x == n-1 && y == n-1)	return ret;
		for (const auto& [nx, ny] : dir){
			if (x+nx >= 0 && x+nx < n && y+ny >= 0 && y+ny < n && grid[x+nx][y+ny] == 0){
				q.push({x + nx, y + ny});
				grid[x+nx][y+ny] = 1;
			}
		}
		if (!cnt){
			ret++;
			cnt = q.size();
		}
	}
	return -1;
}
