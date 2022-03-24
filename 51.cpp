#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<string>> solveNQueens(int n); 
void backtracking(vector<vector<string>>& ret, vector<string>& last, int x, int n);
bool checkboard(const vector<string>& last, const int x, const int y, const int n);
int main(){

	return 0;
}
vector<vector<string>> solveNQueens(int n){
	vector<vector<string>> ret;
	vector<string> last(n, string(n, '.'));
	backtracking(ret, last, 0, n);
	return ret;
}
void backtracking(vector<vector<string>>& ret, vector<string>& last, int x, int n){
	if (x == n){
		ret.push_back(last);
		return;
	}
	for (int i = 0; i < n; i++){
		last[i][x] = 'Q';
		if (checkboard(last, x, i, n))	backtracking(ret, last, x+1, n);
		last[i][x] = '.';
	}
}
bool checkboard(const vector<string>& last, const int x, const int y, const int n){
	for (int i = 0; i < x; i++){
		if (last[y][i] == 'Q')	return false;
		if (y-x+i >= 0 && last[y-x+i][i] == 'Q')	return false;
		if (y+x-i < n && last[y+x-i][i] == 'Q')		return false;
	}
	return true;
}
