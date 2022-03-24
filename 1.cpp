#include <iostream>
#include <unordered_map> 
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target);
int main(){
	vector<int> nums = {2,7,11,15}; 
	int target = 9;
	vector<int> res = twoSum(nums, target);
	cout << res[0] << ", " << res[1] << endl;

	return 0;
}
vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> mp;
	for(int i = 0; i < nums.size(); i++){
		auto it  = mp.find(target - nums[i]);
		if (it != mp.end())	return {it->second, i};
		mp.insert({nums[i], i});
	}
	return {-1, -1};
}
