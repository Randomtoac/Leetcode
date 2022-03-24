#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
char firstUniqChar(string s);
int main(){

	return 0;
}
char firstUniqChar(string s){
	vector<int> cnt(26, -1);
	for (int i = 0; i < s.length(); i++){
		int t = s[i]-'a';
		if (cnt[t] == -2)	continue;
		if (cnt[t] == -1)	cnt[t] = i;
		else	cnt[t] = -2;
	}
	for (int i = 0; i < s.length(); i++){
		if (cnt[s[i]-'a'] >= 0)	return s[i];
	}
	return ' ';
}
