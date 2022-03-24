#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
string capitalizeTitle(string title);
int main(){

	return 0;
}
string capitalizeTitle(string title){
	stringstream ss;
	ss << title;
	vector<string> names;
	while(!ss.eof()){
		string s;
		ss >> s;
		names.push_back(s);
	}
	string ret = "";
	for (string& s : names){
		for (char& ch : s)	ch = tolower(ch);
		if (s.length() >= 3)	s[0] = toupper(s[0]);
		ret += s + " ";
	}
	ret.pop_back();
	return ret;
}
