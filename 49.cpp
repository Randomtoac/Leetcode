#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs);
int main(){

	return 0;
}
vector<vector<string>> groupAnagrams(vector<string>& strs){
	unordered_map<string, vector<string>> mp;
	vector<vector<string>> ret;
	if (!strs.size())	return ret;
	for (auto& s:strs){
		string str = s;
		sort(str.begin(), str.end());
		mp[str].push_back(s);
	}
	for (auto& [s, vs] : mp){
		ret.push_back(vs);
	}
	return ret;
}
