#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int translateNum(int num);
int main(){

	return 0;
}
int translateNum(int num){
	if (num < 10)	return 1;
	string s = to_string(num);
	vector<int> dp(s.length()+1, 0);
	dp[1] = 1;
	for (int i = 2; i <= s.length(); i++){
		dp[i] = dp[i-1];
		if (s[i-1] == '1' || (s[i-1] == '2' && s[i] < '6')){
			dp[i] += dp[i-2];
		}
	}
	print(dp);
	return dp[s.length()];
}
void print(const vector<int>& v){
	for (auto& x : v)	cout << x << " ";
	cout << endl;
}
