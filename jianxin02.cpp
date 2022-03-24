#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> analysisHistogram(vector<int>& heights, int cnt);
int main(){

	return 0;
}
vector<int> analysisHistogram(vector<int>& heights, int cnt){
	vector<int> ret;
	int n = heights.size();
	sort(heights.begin(), heights.end());
	vector<int> dp(n-cnt+1);
	dp[0] = heights[cnt-1] - heights[0];
	int start = 0, minsum = dp[0];
	for (int i = 1; i < n-cnt+1; i++){
		dp[i] = heights[i+cnt-1] - height[i];
		if (dp[i] < minsum){
			minsum = dp[i];
			start = i;
		}
	}
	for (int i = 0; i < cnt; i++){
		ret.push_back(heights[start+i]);
	}
	return ret;
}
