#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
void solve(vector<vector<char>>& board);
void dfs(vector<vector<char>>& board, int x, int y);
int main(){

	return 0;
}
void solve(vector<vector<char>>& board){
	int m = board.size(), n = board[0].size();
	for (int i = 0; i < m; i++){
		dfs(board, i, 0);
		dfs(board, i, n-1);
	}
	for (int j = 0; j < n; j++){
		dfs(board, 0, j);
		dfs(board, m-1, j);
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (board[i][j] == 'O')	board[i][j] = 'X';
			if (board[i][j] == 'Q')	board[i][j] = 'O';
		}
	}
}
void dfs(vector<vector<char>>& board, int x, int y){
	int m = board.size(), n = board[0].size();
	if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] != 'O'){
		return;
	}
	board[x][y] = 'Q';
	dfs(board, x+1, y);
	dfs(board, x-1, y);
	dfs(board, x, y+1);
	dfs(board, x, y-1);
}
