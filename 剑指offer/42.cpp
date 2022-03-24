#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxSubArray(vector<int>& nums);
int main(){

	return 0;
}
int maxSubArray(vector<int>& nums){
	int n = nums.size();
	vector<int> dp(n, nums[0]);
	for (int i = 1; i < n; i++){
		dp[i] = max(dp[i-1]+nums[i], nums[i]);
	}
	return *max_element(dp.begin(), dp.end());
}
