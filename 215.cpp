#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int findKthLargest(vector<int>& nums, int k);
int main(){

	return 0;
}
int findKthLargest(vector<int>& nums, int k){
	sort(nums.begin(), nums.end());
	return nums[nums.size()-k];
}
