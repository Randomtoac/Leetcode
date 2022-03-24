#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

	return 0;
}
class Solution {
private:
	const vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
		vector<vector<char>> ret = board;
		if (board[click[0]][click[1]] == 'M'){
			ret[click[0]][click[1]] = 'X';
			return ret;
		}
		int m = board.size(), n = board[0].size();
		queue<pair<int, int>> q;
		q.push(make_pair(click[0], click[1]));
		vector<vector<bool>> visited(m, vector<bool>(n, false));
		while (q.size()){
			auto [x, y] = queue.front();
			q.pop();
			if (x < 0 || x >= m || y < 0 || y >= n)	continue;
			if (visited[x][y])	continue;
			visited[x][y] = true;
			if (board[x][y] == 'E'){
				int minecnt = 0;
				for (int i = 0; i < 8; i++){
					int newx = x + dir[i][0];
					int newy = y + dir[i][1];
					if (newx < 0 || newx >= m || newy < 0 || newy >= n)	continue;
					if (board[newx][newy] == 'M')	minecnt++;
				}
				if (!minecnt){
					ret[x][y] = 'B';
					for (int i = 0; i < 8; i++){
						q.push(make_pair(x+dir[i][0], y+dir[i][1]));
					}
				}
				else{
					ret[x][y] = char('0' + minecnt);
				}
			}
		}
		return ret;
    }
};
