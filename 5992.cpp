#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maximumGood(vector<vector<int>>& statements);
int main(){

	return 0;
}
int maximumGood(vector<vector<int>>& statements){
	int ret = 0;
	vector<int> last(statements.size(), -1);
	backtracking(statements, last, ret, 0);
	return ret;
}
void backtracking(vector<vector<int>>& statements, vector<int> last, int& ret, int k){
	if (k == statements.size()){
		int cnt = 0;
		for (int& x : last){
			if (x != 0)	cnt++;
		}
		ret = max(ret, cnt);
		return;
	}	
	int n = statements.size();
	bool flag = false;
	vector<int> cur = last;
	for (int j = 0; j < n; j++){
		if (statements[k][j] == 2)	continue;
		if (statements[k][j] == 0){
			if (last[j] == 1){
				flag = true;
				break;
			}
			cur[j] = 0;
		}
		else if (statements[k][j] == 1){
			if (last[j] == 0){
				flag = true;
				break;
			}
			cur[j] = 1;
		}
	}
	if (flag){
		if (last[k] == 1)	return;
		last[k] = 0;
		backtracking(statements, last, ret, k+1);
	}
	else{
		if (cur[k] == -1)	cur[k] = 1;
		backtracking(statements, cur, ret, k+1);
		last[k] = 0;
		backtracking(statements, last, ret, k+1);
	}
}
[[2,0,2,2,0],[2,2,2,1,2],[2,2,2,1,2],[1,2,0,2,2],[1,0,2,1,2]]
