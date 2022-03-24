#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int longestPalindrome(string s);
int main(){

	return 0;
}
int longestPalindrome(string s){
	unordered_map<char, int> mp;
	for (int i = 0; i < s.length(); i++)	mp[s[i]]++;
	int ret = 0, mod = 0;
	for (auto it = mp.begin(); it != mp.end(); it++){
		int cur = it->second;
		if (cur&1)	mod = 1;
		ret += cur/2*2;
	}
	return ret + mod;
}
