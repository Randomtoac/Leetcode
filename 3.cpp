#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int lengthOfLongestSubstring(string s);
int main(){
	string s = "abcabcbb";
	cout << lengthOfLongestSubstring(s) << endl;
	
	return 0;
}
int lengthOfLongestSubstring(string s) {
	int dp[s.length()+1], ret = 0, curbg = 0;
	unordered_map<char, int> mp;
	dp[0] = 0;
	for (int i = 0; i < s.length(); i++){
		if (mp.count(s[i]) == 0){
			dp[i+1] = dp[i] + 1;
		}
		else{
			dp[i+1] = dp[i] - (mp[s[i]]-curbg);
			curbg = mp[s[i]]+1;
		}
		mp[s[i]] = i;
		ret = max(ret, dp[i+1]);
	}
	return ret;
}
