#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
bool backspaceCompare(string s, string t);
int main(){

	return 0;
}
bool backspaceCompare(string s, string t){
	stack<char> ss, st;
	for (char& ch : s){
		if (ch == '#'){
			if (ss.empty())	continue;
			ss.pop();
		}
		else{
			ss.push(ch);
		}
	}
	for(char& ch : t){
		if (ch == '#'){
			if (st.empty())	continue;
			st.pop();
		}
		else{
			st.push(ch);
		}
	} 
	s.clear();
	t.clear();
	while (!ss.empty()){
		char ch = ss.top();
		ss.pop();
		s.push_back(ch);
	} 
	while (!st.empty()){
		char ch = st.top();
		st.pop();
		t.push_back(ch);
	} 
	if (s == t)	return true;
	return false;
}
