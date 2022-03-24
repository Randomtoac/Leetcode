#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k);
int main(){

	return 0;
}
struct item{
	int price;
	int x, y;
	int len;
	item(int _p, int _x, int _y, int _l) : price(_p), x(_x), y(_y), len(_l){}
};
vector<item> ret;
queue<pair<int, int>> q;
const int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k){
	vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
	q.push(make_pair(start[0], start[1]));
	bfs(grid, visited, pricing[0], pricing[1], k, 0);
	sort(ret.begin(), ret.end(), cmp);
	vector<vector<int>> ret_xy;
	for (int i = 0; i < k && i < ret.size(); i++){
		ret_xy.emplace_back(initializer_list<int>{ret[i].x, ret[i].y});
	}
	return ret_xy;
}
static bool cmp(item a, item b){
	if (a.len != b.len)	return a.len < b.len;
	if (a.price != b.price)	return a.price < b.price;
	if (a.x != b.x)	return a.x < b.x;
	return a.y < b.y
}
void bfs(vector<vector<int>>& grid, vector<vector<bool>> visited, int low, int high, int x, int y, int k, int step){
	if (ret.size() >= k)	return;
	if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || visited[x][y] || grid[x][y] == 0)	return;
	visited[x][y] = true;
	step++;
	if (x-1>=0 && !visited[x-1][y] && grid[x-1][y] >= low && grid[x-1][y] <= high){
		item it(grid[x-1][y], x-1, y, step);
		ret.push_back(it);
	}
	if (x+1<grid.size() && !visited[x+1][y] && grid[x+1][y] >= low && grid[x+1][y] <= high){
		item it(grid[x+1][y], x+1, y, step);
		ret.push_back(it);
	}
	if (y-1>=0 && !visited[x][y-1] && grid[x][y-1] >= low && grid[x][y-1] <= high){
		item it(grid[x][y-1], x, y-1, step);
		ret.push_back(it);
	}
	if (y+1<grid[0].size() && !visited[x][y+1] && grid[x][y+1] >= low && grid[x][y+1] <= high){
		item it(grid[x+1][y], x, y+1, step);
		ret.push_back(it);
	}
}
void bfs(vector<vector<int>>& grid, vector<vector<bool>> visited, int low, int high, int k, int step){
	int n = q.size();
	while (!q.empty()){
		auto [x, y] = q.front();
		q.pop();
		if (!visited[x][y]){
			visited[x][y] = true;
			if (grid[x][y] >= low && grid[x][y] <= high){
				item it(grid[x][y], x, y, step);
				ret.push_back(it);
			}
			for (int i = 0; i < 4; i++){
				int nx = x + dir[i][0];
				int ny = y + dir[i][1];
				if (nx < 0 || nx >= grid.size() || ny < 0 || ny >= grid[0].size() || visited[nx][ny] || grid[nx][ny] == 0)	
					continue;
				q.push(make_pair(nx, ny));
			}
		}
		n--;
		if (!n){
			if (ret.size() >= k)	return;
			n = q.size();
		}
	}
}
