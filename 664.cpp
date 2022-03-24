#include <iostream>
#include <vector>
#include <string>
using namespace std;

int strangePrinter(const string& s) {
	int n = s.length();
	vector<vector<int>> dp(n, vector<int>(n));
	for (int i = n-1; i >= 0; i--){
		dp[i][i] = 1;
		for (int j = i+1; j < n; j++){
			if (s[j] == s[i])
				dp[i][j] = dp[i][j-1];
			else{
				dp[i][j] = 100;
				for (int k = i+1; k <= j; k++){
					dp[i][j] = min(dp[i][j], dp[i][k-1] + dp[k][j]);
				}
			}
		}
	}
	return dp[0][n-1];
}

int main(){
	string s[2] = {"aaabbb", "abc"};
	for (int i = 0; i < 2; i++){
		cout << strangePrinter(s[i]) << endl;
	}

	return 0;
}

