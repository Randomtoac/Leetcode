#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target);
int main(){

	return 0;
}
vector<int> twoSum(vector<int>& nums, int target){
	int l = 0, r = nums.size()-1;
	while (l < r){
		if (nums[l] + nums[r] == target)	return {nums[l], nums[r]};
		if (nums[l] + nums[r] < target)	l++;
		else	r--;
	}
	return {};
}
