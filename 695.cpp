#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
int maxAreaOfIsland(vector<vector<int>>& grid);
int main(){
//	vector<vector<int>> grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
//								{0,0,0,0,0,0,0,1,1,1,0,0,0},
//								{0,1,1,0,1,0,0,0,0,0,0,0,0},
//							    {0,1,0,0,1,1,0,0,1,0,1,0,0},
//								{0,1,0,0,1,1,0,0,1,1,1,0,0},
//								{0,0,0,0,0,0,0,0,0,0,1,0,0},
//								{0,0,0,0,0,0,0,1,1,1,0,0,0},
//								{0,0,0,0,0,0,0,1,1,0,0,0,0}};
	vector<vector<int>> grid = {{1,1,0,0,0},
								{1,1,0,0,0},
								{0,0,0,1,1},
								{0,0,0,1,1}};
	cout << maxAreaOfIsland(grid) << endl;
	return 0;
}
int maxAreaOfIsland(vector<vector<int>>& grid){
	int m = grid.size(), n = grid[0].size(), maxarea = 0;
	queue<pair<int, int>> q;
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if ((!visited[i][j]) && grid[i][j]){
				int curarea = 0;
				q.push(make_pair(i, j));
				while(!q.empty()){
					int x = q.front().first, y = q.front().second;
					q.pop();
					if (visited[x][y])	continue;
					curarea++;
					visited[x][y] = true;
					if (x > 0 && grid[x-1][y] && (!visited[x-1][y]))	q.push(make_pair(x-1, y));
					if (x < m-1 && grid[x+1][y] && (!visited[x+1][y]))	q.push(make_pair(x+1, y));
					if (y > 0 && grid[x][y-1] && (!visited[x][y-1]))	q.push(make_pair(x, y-1));
					if (y < n-1 && grid[x][y+1] && (!visited[x][y+1]))	q.push(make_pair(x, y+1));
				}
				maxarea = max(maxarea, curarea);
			}
		}
	}
	return maxarea;
}
