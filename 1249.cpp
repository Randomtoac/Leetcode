#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
string minRemoveToMakeValid(string s);
int main(){

	return 0;
}
string minRemoveToMakeValid(string s){
	int left = 0, right = 0;
	for (char& ch : s){
		if (ch == ')')	right++;
	}
	string ret;
	for (char& ch : s){
		if (ch == '('){
			if (!right)	continue;
			left++;
			right--;
		}
		else if (ch == ')'){
			if (!left){
				right--;
				continue;
			}	
			left--;
		}
		ret.push_back(ch);
	}
	return ret;
}
