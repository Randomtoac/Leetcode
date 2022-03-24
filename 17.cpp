#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> letterCombinations(string digits);
void backtracking(string last, vector<string>& ret, vector<string>& v, string& digits, int tail);
int main(){

	return 0;
}
vector<string> letterCombinations(string digits){
	vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	string last;
	vector<string> ret;
	if (!digits.length())   return ret;
	int tail = 0;
	backtracking(last, ret, v, digits, tail);
	return ret;
}
void backtracking(string last, vector<string>& ret, vector<string>& v, string& digits, int tail){
	if (tail == digits.length()){
		ret.push_back(last);
		return;
	}
	for (char& ch : v[digits[tail] - '0']){
		last.push_back(ch);
		backtracking(last, ret, v, digits, tail+1);
		last.pop_back();
	}
}
