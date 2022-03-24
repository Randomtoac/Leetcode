#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int longestSubsequence(vector<int>& arr, int difference);
int main(){

	return 0;
}
int longestSubsequence(vector<int>& arr, int difference){
	int n = arr.size(), ret = 0;
	unordered_map<int, int> dp;
	for (int& num : arr){
		dp[num] = dp[num - difference] + 1;
		ret = max(ret, dp[num]);
	}
	return ret;
}
//int longestSubsequence(vector<int>& arr, int difference){
//	int n = arr.size(), ret = 0;
//	vector<int> dp(n, 1);
//	for (int i = 1; i < n; i++){
//		for (int j = i-1; j >= 0; j--){
//			if (arr[j] == arr[i] - difference){
//				dp[i] = dp[j] + 1;
//				break;
//			}
//		}
//		ret = max(ret, dp[i]);
//	}
//	return ret;
//} TLE
