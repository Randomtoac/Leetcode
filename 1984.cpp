#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minimumDifference(vector<int>& nums, int k); 
int main(){

	return 0;
}
int minimumDifference(vector<int>& nums, int k){
	if (k == 1)	return 0;
	sort(nums.begin(), nums.end());
	int ret = 100001;
	for (int i = 0; i < nums.size() - k + 1; i++){
		ret = min(ret, nums[i+k-1] - nums[i]);
	}
	return ret;
}
