#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int singleNonDuplicate(vector<int>& nums);
int main(){

	return 0;
}
int singleNonDuplicate(vector<int>& nums){
	int l = 0, r = nums.size()-1;
	while(l < r){
		int mid = (r-l) >> 1 + l;
		if (nims[mid] == nums[mid^1])	l = mid+1;
		else	r = mid;
	}
	return nums[l];
}
