#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums);
int main(){

	return 0;
}
int minSubArrayLen(int target, vector<int>& nums){
	int ret = nums.size()+1, l = 0, cur = 0;
	for (int r = 0; r < nums.size(); r++){
		cur += nums[i];
		while (cur >= target){
			ret = min(ret, r-l+1);
			cur -= nums[l++];
		}
	}
	if (ret == nums.size()+1)	return 0;
	return ret;
}
