#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
int orangesRotting(vector<vector<int>>& grid) ;
int main(){

	return 0;
}
int orangesRotting(vector<vector<int>>& grid) {
    queue<pair<int, int>> q;
    int nextto[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int m = grid.size(), n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    vector<vector<int>> ret(m, vector<int>(n, -1));
    int ans = -1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (grid[i][j] == 2){
                visited[i][j] = true;
                ret[i][j] = 0;
                ans = 0;
                q.push(make_pair(i, j));
            }
            if (grid[i][j] == 1)    ans = 1;
        }
    }
    if (ans < 0)	return 0;
    while(!q.empty()){
        auto [i, j] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++){
            int nexti = i + nextto[k][0];
            int nextj = j + nextto[k][1];
            if (nexti >= 0 && nexti < m && nextj >= 0 && nextj < n && grid[nexti][nextj] == 1 && !visited[nexti][nextj]){
                ret[nexti][nextj] = ret[i][j] + 1;
                q.push(make_pair(nexti, nextj));
                visited[nexti][nextj] = true;
                ans = max(ans, ret[nexti][nextj]);
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (ret[i][j] < 0 && grid[i][j] == 1){
                return -1;
            }
        }
    }
    return ans;
}
