#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int lengthOfLongestSubstring(string s);
int main(){

	return 0;
}
int lengthOfLongestSubstring(string s){
	unordered_map<char, int> lastindex;
	int ret = 0, last = -1;
	for (int i = 0; i < s.length(); i++){
		if (lastindex.count(s[i]) && lastindex[s[i]] > last)	last = lastindex[s[i]];
		lastindex[s[i]] = i;
		ret = max(ret, i - last);
	}
	return ret;
}
