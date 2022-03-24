#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string modifyString(string s);
int main(){

	return 0;
}
string modifyString(string s){
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '?'){
			if (s.length() == 1)	return "a";
			if (i == 0)	s[i] = s[1] == 'a' ? 'b' : 'a';
			else if (i == s.length()-1)	s[i] = s[i-1] == 'a' ? 'b' : 'a';
			else{
				if (s[i-1] != 'a' && s[i+1] != 'a')	s[i] = 'a';
				else if (s[i-1] != 'b' && s[i+1] != 'b')	s[i] = 'b';
				else	s[i] = 'c';
			}
		}
	}
	return s;
}
