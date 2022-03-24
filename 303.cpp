#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

class NumArray {
private:
	vector<int> dp;
public:
    NumArray(vector<int>& nums) {
		dp.clear();
		dp.resize(nums.size()+1);
		dp[0] = 0;
		for (int i = 0; i < nums.size(); i++){
			dp[i+1] = dp[i] + nums[i];
		}
    }
    
    int sumRange(int left, int right) {
		return dp[right+1] - dp[left];
    }
};
