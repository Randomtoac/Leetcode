#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> generateParenthesis(int n);
void backtracking(string last, vector<string>& ret, int& n, int& left, int& right);
int main(){

	return 0;
}
vector<string> generateParenthesis(int n){
	string last;
	vector<string> ret;
	int left = 0, right = 0;
	backtracking(last, ret, n, left, right);
	return ret;
}
void backtracking(string last, vector<string>& ret, int& n, int& left, int& right){
	if (last.length() == 2*n){
		ret.push_back(last);
		return;
	}
	if (left < n){
		left++;
		last.push_back('(');
		backtracking(last, ret, n, left, right);
		last.pop_back();
		left--;
	}
	if (left > right){
		right++;
		last.push_back(')');
		backtracking(last, ret, n, left, right);
		last.pop_back();
		right--;
	}
}
