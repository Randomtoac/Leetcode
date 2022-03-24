#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int numIslands(vector<vector<char>>& grid);
void bfs(int x, int y, int& m, int& n, vector<vector<bool>>& visited, vector<vector<char>>& grid);
int main(){

	return 0;
}
int numIslands(vector<vector<char>>& grid){
	int m = grid.size(), n = grid[0].size();
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	int ret = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (!visited[i][j] && grid[i][j] == '1'){
				visited[i][j] = true;
				ret++;
				bfs(i, j, m, n, visited, grid);
			}
		}
	} 
	return ret;
}
void bfs(int x, int y, int& m, int& n, vector<vector<bool>>& visited, vector<vector<char>>& grid){
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	while (!q.empty()){
		int i = q.front().first , j = q.front().second;
		q.pop();
		if (i < m-1 && grid[i+1][j] == '1' && !visited[i+1][j]){
			q.push(make_pair(i+1, j));
			visited[i+1][j] = true;
		}
		if (j < n-1 && grid[i][j+1] == '1' && !visited[i][j+1]){
			q.push(make_pair(i, j+1));
			visited[i][j+1] = true;
		}
		if (i > 0 && grid[i-1][j] == '1' && !visited[i-1][j]){
			q.push(make_pair(i-1, j));
			visited[i-1][j] = true;
		}
		if (j > 0 && grid[i][j-1] == '1' && !visited[i][j-1]){
			q.push(make_pair(i, j-1));
			visited[i][j-1] = true;
		}
	}
}
