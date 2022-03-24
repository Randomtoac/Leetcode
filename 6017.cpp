#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
long long minimalKSum(vector<int>& nums, int k);
int main(){

	return 0;
}
long long minimalKSum(vector<int>& nums, int k){
	long long ret = 0;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++){
		if (i == 0){
			if (k >= nums[0]){
				ret += (long long)(nums[0]-1) * nums[0] / 2;
				k -= nums[0]-1;
				continue;
			}
			else{
				return (long long)k*(1+k)/2;
			}
		}
		int sub = nums[i] - nums[i-1] - 1;
		if (sub <= 0)	continue;
		if (k <= sub){
			ret += (long long)k * (nums[i-1]+1 + nums[i-1]+k) / 2;
			return ret;
		}
		else{
			k -= sub;
			ret += (long long)sub * (nums[i-1]+1 + nums[i-1] + sub) / 2;
		}
	}
	if (k){
		ret += (long long)k * (nums[nums.size()-1]+1 + nums[nums.size()-1]+k) / 2;
	}
	return ret;
}
