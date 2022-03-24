#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countBattleships(vector<vector<char>>& board);
int main(){

	return 0;
}
int countBattleships(vector<vector<char>>& board){
	int count = 0;
	for (int i = 0; i < board.size(); i++){
		for (int j = 0; j < board[0].size(); j++){
			if (board[i][j] == 'X') {
                if (i > 0 && board[i - 1][j] == 'X') {
                    continue;
                }
                if (j > 0 && board[i][j - 1] == 'X') {
                    continue;
                }
                count++;
            }
		}
	}
	return count;
}
