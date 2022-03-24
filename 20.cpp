#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
bool isValid(string s);
int main(){
	string s = "}";
	cout << isValid(s) << endl;
	return 0;
}
bool isValid(string s) {
	char t[10001];
	unordered_map <char, char> mp;
	mp['('] = ')';
	mp['['] = ']';
	mp['{'] = '}';
	int top = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '{' || s[i] == '(' || s[i] == '['){
			t[top++] = s[i];
		}
		else{
			if (!top || s[i] != mp[t[--top]])	return false;
		}
	}
	if (top)	return false;
	return true;
}
