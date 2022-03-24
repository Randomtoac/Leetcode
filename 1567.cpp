#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int getMaxLen(vector<int>& nums);
int main(){
	vector<int> nums = {-16,0,-5,2,2,-13,11,8};
	cout << getMaxLen(nums) << endl;
	return 0;
}
int getMaxLen(vector<int>& nums) {
	int l = nums.size();
	int dp[2][l];
	dp[0][0] = nums[0]>0?1:0;
	dp[1][0] = nums[0]<0?1:0;
	int ret = dp[0][0];
	for (int i = 1; i < l; i++){
		if (nums[i]>0){
			dp[0][i] = dp[0][i-1]+1;
			dp[1][i] = dp[1][i-1]>0 ? dp[1][i-1]+1 : 0;
		}
		else if (nums[i]<0){
			dp[0][i] = dp[1][i-1]>0 ? dp[1][i-1]+1 : 0;
			dp[1][i] = dp[0][i-1]+1;
		}
		else{
			dp[0][i] = 0;
			dp[1][i] = 0;
		}
		ret = max(ret, dp[0][i]);
	}
	return ret;
}
