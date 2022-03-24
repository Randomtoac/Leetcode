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
	return binarySearch(nums, 0, nums.size()-1, target);
}
int binarySearch(vector<int>& nums, int l, int r, const int& target){
	while (l <= r){
		int mid = l + (r - l) / 2;
		if (nums[mid] > target)	r = mid - 1;
		else if (nums[mid] < target)	l = mid + 1;
		else{
			if (nums[l] == nums[r])	return r - l + 1;
			if (nums[l] < target)	l++;
			if (nums[r] > target)	r--;
		}
	}
	return 0;
}
