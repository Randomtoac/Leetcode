#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool exist(vector<vector<char>>& board, string word);
bool backtracking(vector<vector<bool>>& visited, vector<vector<char>>& board, string& word, int x, int y, int cur);
int main(){

	return 0;
}
bool exist(vector<vector<char>>& board, string word){
    vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
    int cur = 0;
    for (int i = 0; i < board.size(); i++){
        for (int j = 0; j < board[0].size(); j++){
            if (backtracking(visited, board, word, i, j, cur)){
                return true;
            }
        }
    }
    return false;
}
bool backtracking(vector<vector<bool>>& visited, vector<vector<char>>& board, string& word, int x, int y, int cur){
    if (cur == word.size())	return true;
    if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || visited[x][y] || board[x][y] != word[cur])	return false;
    visited[x][y] = true;
    if (
        backtracking(visited, board, word, x-1, y, cur+1) ||
        backtracking(visited, board, word, x+1, y, cur+1) ||
        backtracking(visited, board, word, x, y-1, cur+1) ||
        backtracking(visited, board, word, x, y+1, cur+1)
    ){
        return true;
    }
    visited[x][y] = false;
    return false;
}
