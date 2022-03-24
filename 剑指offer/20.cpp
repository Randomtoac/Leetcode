#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isNumber(string s); 
int main(){

	return 0;
}
bool isNumber(string s){
	int l = 0, r = s.length()-1;
	while (s[l] == ' '){
		l++;
		if (l > r)	return false;
	}
	while (s[r] == ' '){
		r--;
		if (r < l)	return false;
	}
	s = s.substr(l, r-l+1);
	if (s == "." || s == "-." || s == "+.")	return false;
	bool fe = false, fd = false;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == ' ')	return false;
		if (s[0] == '-' || s[0] == '+'){
			if (i == 0)	continue;
			return false;
		}
		if (isalpha(s[i])){
			if (s[i] == 'e' || s[i] == 'E'){
				if (i == 0)	return false;
				if (i == 1 && (s[0] == '-' || s[0] == '+'))	return false;
				if (fe)	return false;
				fe = true;
				fd = true;
				if (i == s.length()-1)	return false;
				if (s[i+1] == '-' || s[i+1] == '+'){
					i++;
					if (i == s.length()-1)	return false;
				}
			}
			else 	return false;
		}
		else if (s[i] == '.'){
			if (fd)	return false;
			if (i == 0 && i < s.length()-1 && (s[i+1] == 'e' || s[i+1] == 'E'))	return false;
			fd = true;
		}
	}
	return true;
}
