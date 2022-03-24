#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries);
int main(){

	return 0;
}
vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries){
	vector<vector<int>> dp(s.length(), vector<int>(2, 0));
	unordered_map<int, int> mp;
	if (s[0] == '|'){
		dp[0][0] = 1;
		dp[0][1] = 1;
		mp[1] = 0;
	}
	for (int i = 1; i < s.length(); i++){
		if (s[i] == '|'){
			dp[i][0] = dp[i-1][0] + 1;
			dp[i][1] = 1;
			mp[dp[i][0]] = i;
		}
		else	dp[i][0] = dp[i-1][0];
	}
	vector<int> ret;
	for (auto& v : queries){
		int lcnt = dp[v[0]][0]-dp[v[0]][1]+1;
		int rcnt = dp[v[1]][0];
		if (lcnt >= rcnt){
			ret.push_back(0);
			continue;
		}
		int left = mp[lcnt];
		int right = mp[rcnt];
		int plates = right - rcnt + lcnt - left;
		ret.push_back(plates ? plates : 0);
	}
	return ret;
} 
