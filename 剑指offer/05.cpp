#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string replaceSpace(string s);
int main(){

	return 0;
}
string replaceSpace(string s){
	string ret;
	for (char& ch : s){
		if (ch == ' ')	ret.append("%20");
		else ret.push_back(ch);
	}
	return ret;
}
