#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums);
int main(){
	vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
	cout << maxSubArray(nums) << endl;
	return 0;
}
int maxSubArray(vector<int>& nums) {
	int l = nums.size();
	vector<int> sum(l);
	sum[0] = nums[0];
	int last = sum[0];
	for (int i = 1; i < l; i++){
		sum[i] = max(sum[i-1] + nums[i], nums[i]);
		last = max(last, sum[i]);
	}
	return last;
}
