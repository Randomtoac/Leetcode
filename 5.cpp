#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
string longestPalindrome(string s);
int main(){
	
	return 0;
}
string longestPalindrome(string s){
	int n = s.length();
	if (n < 2)	return s;
	vector<vector<bool>> dp(n, vector<bool>(n, false));
	int mlen = 1, start = 0;
	for (int i = 0; i < n; i++){
		dp[i][i] = true;
	}
	for (int len = 2; len <= n; len++){
		for (int i = 0; i < n; i++){
			int j = i + len - 1;
			if (j > n-1)	break;
			if (s[i] != s[j]){
				dp[i][j] = false;
			}
			else{
				if (len < 4)	dp[i][j] = true;
				else	dp[i][j] = dp[i+1][j-1];
			}
			if (dp[i][j] && len > mlen){
				mlen = len;
				start = i;
			}
		}
	}
	return s.substr(start, mlen);
}
