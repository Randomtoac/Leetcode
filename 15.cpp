#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums);
int main(){

	return 0;
}
vector<vector<int>> threeSum(vector<int>& nums){
	sort(nums.begin(), nums.end());
	int n = nums.size();
	vector<vector<int>> ret;
	for (int i = 0; i < n-2; i++){
		if (i > 0 && nums[i] == nums[i-1])	continue;
		int first = nums[i], k = n-1;
		for (int j = i+1; j < n-1; j++){
			if (j > i+1 && nums[j-1] == nums[j]){
				continue;
			}
			while (j < k && nums[j] + nums[k] + first > 0)	k--;
			if (j == k)	break;
			if (nums[j] + nums[k] + first == 0){
				ret.push_back({first, nums[j], nums[k]});
			}	
		}
	}
	return ret;
}
