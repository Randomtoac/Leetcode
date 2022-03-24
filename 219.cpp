#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k);
int main(){

	return 0;
}
bool containsNearbyDuplicate(vector<int>& nums, int k){
	unordered_map<int, int> mp;
	for (int i = 0; i < nums.size(); i++){
		if (mp.count(nums[i]) && i - mp[nums[i]] <= k)	return true;
		mp[nums[i]] = i;
	}
	return false;
}
