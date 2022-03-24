#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numSquares(int n);
int main(){
	for (int i = 1; i < 13; i++){
		cout << numSquares(i) << endl;
	}
	return 0;
}
int numSquares(int n){
	vector<int> dp(n+1, 10010);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++){
		for (int j = 1; j*j <= i; j++){
			dp[i] = min(dp[i], dp[i-j*j] + 1);
		}
	}
	return dp[n];
}
