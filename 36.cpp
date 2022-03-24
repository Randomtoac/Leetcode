#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board);
int main(){
	vector<vector<char>> board = {
	{'5','3','.','.','7','.','.','.','.'},
	{'6','.','.','1','9','5','.','.','.'},
	{'.','9','8','.','.','.','.','6','.'},
	{'8','.','.','.','6','.','.','.','3'},
	{'4','.','.','8','.','3','.','.','1'},
	{'7','.','.','.','2','.','.','.','6'},
	{'.','6','.','.','.','.','2','8','.'},
	{'.','.','.','4','1','9','.','.','5'},
	{'.','.','.','.','8','.','.','7','9'}};
	cout << isValidSudoku(board) << endl;
	return 0;
}
bool isValidSudoku(vector<vector<char>>& board) {
	set<char> checkr, checkc, checks;
	for (int i = 0; i < 9; i++){
		checkr.clear();
		checkc.clear();
		checks.clear();
		for (int j = 0; j < 9; j++){
			char curr = board[i][j];
			if (checkr.count(curr) && curr != '.')	return false;
			checkr.insert(curr);
			char curc = board[j][i];
			if (checkc.count(curc) && curc != '.')	return false;
			checkc.insert(curc);
			char curs = board[i/3*3+j/3][(i%3)*3+j%3];
			if (checks.count(curs) && curs != '.')	return false;
			checks.insert(curs);
		}
	}
	return true;
}
