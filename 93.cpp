#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> restoreIpAddresses(string s);
void backtracking(string& s, vector<string>& ret, string last, int begin, int cnt);
int main(){

	return 0;
}
vector<string> restoreIpAddresses(string s){
	string last;
	vector<string> ret;
	if (s.length() < 4)	return ret;
	backtracking(s, ret, last, 0, 0);
	return ret;
}
void backtracking(string& s, vector<string>& ret, string last, int begin, int cnt){
	if (cnt >= 4){
		if (begin == s.length()){
			last.pop_back();
			ret.push_back(last);
		}
		return;
	}
	if (begin >= s.length())	return;
	if (s[begin] == '0'){
		backtracking(s, ret, last+"0.", begin+1, cnt+1);
		return;
	}
	int temp = 0;
	for (int i = begin; i < begin+3 && i < s.length(); i++){
		temp *= 10;
		temp += s[i] - '0';
		if (temp > 255)	break;
		backtracking(s, ret, last+to_string(temp)+".", i+1, cnt+1);
	}
}
