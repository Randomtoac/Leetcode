#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minSteps(string s, string t);
int main(){

	return 0;
}
int minSteps(string s, string t){
	vector<int> cnt(26, 0);
	for (char& ch : s)	cnt[ch-'a']++;
	for (char& ch : t)	cnt[ch-'a']--;
	int ret = 0;
	for (int x : cnt){
		ret += abs(x);
	}
	return ret;
}
