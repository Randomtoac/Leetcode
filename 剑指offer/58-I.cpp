#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
string reverseWords(string s);
int main(){

	return 0;
}
string reverseWords(string s){
	stringstream ss;
	ss << s;
	if (ss.eof())	return "";
	string ret, t;
	ss >> ret;
	while (ss >> t){
		t.push_back(' ');
		t.append(ret);
		ret = t;
	}
	return ret;
}
