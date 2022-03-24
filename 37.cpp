#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
void solveSudoku(vector<vector<char>>& board);
void backtracking(int x, int y, vector<vector<char>>& board, bool& doneflag);
bool checkboard(vector<vector<char>>& b, int x, int y);
void printBoard(vector<vector<char>>& board, int x, int y, int t);
int trytimes = 0;
int main(){
	vector<vector<char>> board = 
	{{'5','3','.','.','7','.','.','.','.'},
	{'6','.','.','1','9','5','.','.','.'},
	{'.','9','8','.','.','.','.','6','.'},
	{'8','.','.','.','6','.','.','.','3'},
	{'4','.','.','8','.','3','.','.','1'},
	{'7','.','.','.','2','.','.','.','6'},
	{'.','6','.','.','.','.','2','8','.'},
	{'.','.','.','4','1','9','.','.','5'},
	{'.','.','.','.','8','.','.','7','9'}};
//	vector<vector<char>> board = 
//	{{'5','3','4','6','7','8','9','1','2'},
//	{'6','7','2','1','9','5','3','4','8'},
//	{'1','9','8','3','4','2','5','6','7'},
//	{'8','5','9','7','6','1','4','2','3'},
//	{'4','2','6','8','5','3','7','9','1'},
//	{'7','1','3','9','2','4','8','5','6'},
//	{'9','6','1','5','3','7','2','8','4'},
//	{'2','8','7','4','1','9','6','3','5'},
//	{'3','4','5','2','8','6','1','7','9'}};
//	for (int i = 0; i < 9; i++){
//		for (int j = 0; j < 9; j++){
//			cout << checkboard(board, i, j);
//		}
//		cout << endl;
//	}
	solveSudoku(board); 
	return 0;
}
void solveSudoku(vector<vector<char>>& board){
	bool doneflag = false;
	backtracking(0, 0, board, doneflag);
}
void backtracking(int x, int y, vector<vector<char>>& board, bool& doneflag){
    if (doneflag)	return;
    if (x == 8 && y == 9){
    	printBoard(board, x, y, trytimes);
        doneflag = true;
        return;
    }
    if (y > 8){
        x++;
        y = 0;
    }
    while (board[x][y] != '.'){
        y++;
        if (x == 8 && y == 9){
        	printBoard(board, x, y, trytimes);
	        doneflag = true;
	        return;
	    }
        if (y > 8){
            x++;
            y = 0;
        }
    }
//    cout << "QWEQE " << x << " " << y << endl;
    for (int i = 1; i < 10 && !doneflag; i++){
        board[x][y] = '0' + i;
//        cout << "ASDASD " << x << " " << y << " " << board[x][y] << endl;
        if (checkboard(board, x, y))	backtracking(x, y+1, board, doneflag);
        if (!doneflag)	board[x][y] = '.';
    }
}
bool checkboard(vector<vector<char>>& b, int x, int y){
    unordered_set<char> us;
    for (int i = 0; i < 9; i++){
        if (b[x][i] == '.')	continue;
        if (us.count(b[x][i]))	return false;
        us.insert(b[x][i]);
    }
    us.clear();
    for (int i = 0; i < 9; i++){
        if (b[i][y] == '.')	continue;
        if (us.count(b[i][y]))	return false;
        us.insert(b[i][y]);
    }
    us.clear();
    int tx = x / 3 * 3;
    int ty = y / 3 * 3;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (b[tx+i][ty+j] == '.')	continue;
            if (us.count(b[tx+i][ty+j]))	return false;
            us.insert(b[tx+i][ty+j]);
        }
    }
    trytimes++;
//    if (trytimes > 4200){
//    	cout << "ZXCZXCZ " << x << " " << y << endl;
//        printBoard(b, x, y, trytimes);
//    }
    return true;
}
void printBoard(vector<vector<char>>& board, int x, int y, int t){
    cout << "Current X Y: " << x << " " << y << endl;
    cout << "Try times: " << t << endl << endl; 
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "***************************************" << endl;
}
