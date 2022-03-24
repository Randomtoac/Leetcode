#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int prefixCount(vector<string>& words, string pref);
int main(){

	return 0;
}
int prefixCount(vector<string>& words, string pref){
	int ret = 0, n = pref.size();
	for (string& s : words){
		if (s.substr(0, n) == pref)	ret++;
	}
	return ret;
}
