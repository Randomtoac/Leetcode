#include <iostream>
#include <vector>
using namespace std;

int deleteAndEarn(vector<int>& nums);
int main(){
	vector<int> nums = {2,2,3,3,3,4}; 
	cout << deleteAndEarn(nums) << endl;

	return 0;
}

int deleteAndEarn(vector<int>& nums) {
	vector<int> points(10001, 0);
	int l = 0;
	for (int i = 0; i < nums.size(); i++){
		points[nums[i]] += nums[i];
		l = max(l, nums[i]);
	}
	vector<int> tot(l+1);
	tot[0] = 0;
	tot[1] = points[1];
	for (int i = 2; i <= l; i++){
		tot[i] = max(tot[i-1], tot[i-2] + points[i]);
	}
	return tot[l];
}
