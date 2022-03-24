#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> findWords(vector<string>& words);
int main(){

	return 0;
}
vector<string> findWords(vector<string>& words){
	string rowind = "12210111011122000010020202";
	vector<string> ret;
	for (string& s : words){
		char first = rowind[tolower(s[0])-'a'];
		bool flag = true;
		for (char& ch : words){
			if (rowind[tolower(ch)-'a'] != first){
				flag = false;
				break;
			}
		}
		if (flag){
			ret.push_back(s);
		}
	}
	return ret;
}
