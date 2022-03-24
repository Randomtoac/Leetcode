#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findMin(vector<int>& nums);
int main(){

	return 0;
}
int findMin(vector<int>& nums){
	int flag = nums.back();
	int left = 0, right = nums.size()-1;
	while (left < right){
		int mid = left + right >> 1;
		if (nums[mid] < flag){
			right = mid;
		}
		else	left = mid + 1;
	}
	return nums[left];
}
