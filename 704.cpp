#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target);
int main(){
	vector<int> nums = {-1,0,3,5,9,12};
	int target = 2;
	cout << search(nums, target) << endl;

	return 0;
}
int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size(); 
	while(low <= high){
		int mid = (low+high)/2;
		if (nums[mid] == target)	return mid;
		if (nums[mid] < target)	low = mid + 1;
		else	high = mid - 1;
	}
	return -1;
}
