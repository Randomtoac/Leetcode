#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
vector<string> uncommonFromSentences(string s1, string s2);
int main(){

	return 0;
}
vector<string> uncommonFromSentences(string s1, string s2){
	stringstream ss;
	unordered_map<string, int> mp;
	ss << s1;
	string s;
	while (ss >> s){
		mp[s]++;
	}
	ss.clear();
	ss << s2;
	while (ss >> s){
		mp[s]++;
	}
	vector<string> ret;
	for (auto& [s, t] : mp){
		if (t == 1)	ret.push_back(s);
	}
	return ret;
}
