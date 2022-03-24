#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> permutation(string s);
void backtracking(vector<string>& ret, string last, vector<bool>& visited, unordered_set<string>& st, const string s);
int main(){

	return 0;
}
vector<string> permutation(string s){
	vector<string> ret;
	string last;
	vector<bool> visited(s.length(), false);
	unordered_set<string> st;
	backtracking(ret, last, visited, st, s);
	return ret;
}
void backtracking(vector<string>& ret, string& last, vector<bool>& visited, unordered_set<string>& st, const string s){
	if (last.length() == s.length()){
		if (!st.count(last)){
			ret.push_back(last);
			st.insert(last);
		}	
		return;
	}
	for (int i = 0; i < s.length(); i++){
		if (!visited[i]){
			last.push_back(s[i]);
			visited[i] = true;
			backtracking(ret, last, visited, st, s);
			visited[i] = false;
			last.pop_back();
		}
	}
}
