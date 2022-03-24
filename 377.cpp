#include <iostream>
#include <vector>
using namespace std;

int combinationSum4(vector<int>& nums, int target) {
	vector<unsigned int> dp(target+1, 0);
	dp[0] = 1;
	
	for (int i = 1; i <= target; i++){
		for (int j = 0; j < nums.size(); j++){
			if (nums[j] <= i){
				dp[i] += dp[i-nums[j]];
			}
		}
	}
	return dp[target];
}

int main(){
	vector<int> nums = {1,2,3};
	int target = 4;
	int output = combinationSum4(nums, target);
	cout << output << endl;

	return 0;
}

