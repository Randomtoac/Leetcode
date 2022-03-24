#include <iostream>
#include <vector>
using namespace std;
int maxSubarraySumCircular(vector<int>& nums);
int main(){
	vector<int> nums = {-2,-3,-1};
	cout << maxSubarraySumCircular(nums) << endl;
	return 0;
}
int maxSubarraySumCircular(vector<int>& nums) {
	int l = nums.size();
	vector<int> lar(l), sma(l);
	lar[0] = nums[0];
	sma[0] = nums[0];
	int lmax = lar[0], lmin = nums[0], sum = nums[0];
	for (int i = 1; i < l; i++){
		sum += nums[i];
		lar[i] = max(lar[i-1] + nums[i], nums[i]);
		lmax = max(lmax, lar[i]);
		sma[i] = min(sma[i-1] + nums[i], nums[i]);
		lmin = min(lmin, sma[i]);
	}
	if (lmax < 0)	return lmax;
	return max(lmax, sum-lmin);
}

