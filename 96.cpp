#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numTrees(int n);
int main(){
	for (int i = 1; i < 20; i++)	cout << numTrees(i) << endl;
	return 0;
}
int numTrees(int n){
	vector<int> dp(25, 0);
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i < 20; i++){
		for (int j = 1; j <= i; j++){
			dp[i] += dp[j-1] * dp[i-j];
		}
	}
	return dp[n];
}
