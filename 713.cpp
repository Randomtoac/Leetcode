#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k);
int main(){

	return 0;
}
int numSubarrayProductLessThanK(vector<int>& nums, int k){
	if (k <= 1)	return 0;
	int ret = 0, l = 0, n = nums.size(), cur = 1;
	for (int r = 0; r < n; r++){
		cur *= nums[r];
		while(cur >= k){
			cur /= nums[l++];
		}
		ret += r - l + 1;
	}
	return ret;
}
