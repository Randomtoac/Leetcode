#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int movingCount(int m, int n, int k);
void backtracking(int& m, int& n, int& k, int x, int y, vector<vector<bool>>& visited, int& ret);
int main(){

	return 0;
}
int movingCount(int m, int n, int k){
	int ret = 0;
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	backtracking(m, n, k, 0, 0, visited, ret);
	return ret;
}
void backtracking(int& m, int& n, int& k, int x, int y, vector<vector<bool>>& visited, int& ret){
	if (x < 0 || y < 0 || x >= m || y >= n)	return;
	if (visited[x][y])	return;
	if (x/10+x%10 + y/10+y%10 > k)	return;
	visited[x][y] = true;
	ret++;
	const int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	for (int i = 0; i < 4; i++){
		backtracking(m, n, k, x+dir[i][0], y+dir[i][1], visited, ret);
	}
}

