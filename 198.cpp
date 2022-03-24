#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int>& nums);
int main(){
	vector<int> nums = {2,7,9,3,1}; 
	cout << rob(nums) << endl;

	return 0;
}

int rob(vector<int>& nums) {
	int l = nums.size();
	if (l == 1)	return nums[0];
	vector<int> tot(l);
	tot[0] = nums[0];
	tot[1] = max(nums[0], nums[1]);
	for (int i = 2; i < l; i++){
		tot[i] = max(tot[i-1], tot[i-2] + nums[i]);
	}
	return tot[l-1];
}
