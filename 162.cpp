#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findPeakElement(vector<int>& nums);
int main(){

	return 0;
}
int findPeakElement(vector<int>& nums){
	int left = 0, right = nums.size()-1;
	while (left < right){
		int mid = left + (right - left >> 1);
		if (nums[mid] < nums[mid+1])	left = mid + 1;
		else	right = mid;
	}
	return left;
}
