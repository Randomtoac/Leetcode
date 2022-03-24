#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int missingNumber(vector<int>& nums);
int main(){

	return 0;
}
int missingNumber(vector<int>& nums){
	int l = 0, r = nums.size()-1;
	while (l <= r){
		int mid = l + (r - l) / 2;
		if (nums[mid] == mid)	l = mid + 1;
		else	r = mid - 1;
	}
	return l;
}
