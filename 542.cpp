#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
vector<vector<int>> updateMatrix(vector<vector<int>>& mat);
int main(){

	return 0;
}
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
	queue<pair<int, int>> q;
	int nextto[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
	int m = mat.size(), n = mat[0].size();
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	vector<vector<int>> ret(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (mat[i][j] == 0){
				visited[i][j] = true;
				ret[i][j] = 0;
				q.push(make_pair(i, j));
			}
		}
	}
	while(!q.empty()){
		auto [i, j] = q.front();
		q.pop();
		for (int k = 0; k < 4; k++){
			int nexti = i + nextto[k][0];
			int nextj = j + nextto[k][1];
			if (nexti >= 0 && nexti < m && nextj >= 0 && nextj < n && !visited[nexti][nextj]){
				ret[nexti][nextj] = ret[i][j] + 1;
				q.push(make_pair(nexti, nextj));
				visited[nexti][nextj] = true;
			}
		}
	}
	return ret;
}
