#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maxProduct(vector<int>& nums); 
int main(){
	vector<int> nums = {-2, 0, -1};
	cout << maxProduct(nums) << endl;
	return 0;
}
int maxProduct(vector<int>& nums) {
	int n = nums.size();
	int maxn[n], minn[n], ret = nums[0];
	maxn[0] = nums[0];
	minn[0] = nums[0];
	for (int i = 1; i < n; i++){
		maxn[i] = max(nums[i], max(nums[i]*maxn[i-1], nums[i]*minn[i-1]));
		minn[i] = min(nums[i], min(nums[i]*maxn[i-1], nums[i]*minn[i-1]));
		ret = max(ret, maxn[i]);
	}
	return ret;
}
