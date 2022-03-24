#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int search(vector<int>& nums, int target);
int main(){

	return 0;
}
int search(vector<int>& nums, int target){
	int n = nums.size();
	if (!n)	return -1;
	if (n == 1)	return nums[0] == target ? 0 : -1;
	int left = 0, right = n-1;
	while(left <= right){
		int mid = left+right >> 1;
		if (nums[mid] == target)	return mid;
		if (nums[left] <= nums[mid]){
			if (nums[left] <= target && nums[mid] > target){
				right = mid-1;
			}
			else	left = mid+1;
		}
		else{
			if (nums[mid] < target && target <= nums[right]){
				left = mid+1;
			}
			else	right = mid-1;
		}
	}
	return -1;
}
