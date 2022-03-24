#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target);
int main(){
	vector<int> nums = {1,3,5,6};
	cout << searchInsert(nums, 7);
	return 0;
}
int searchInsert(vector<int>& nums, int target) {
	int low = 0, high = nums.size()-1;
	while(low <= high){
		int mid = (low+high)/2;
		if (nums[mid] < target){
			low = mid+1;
		}
		else	high = mid-1;
	}
	return low;
}
