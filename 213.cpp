#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int>& nums);
int main(){
	vector<int> nums = {2,2}; 
	cout << rob(nums) << endl;

	return 0;
}

int rob(vector<int>& nums) {
	int l = nums.size();
    if (l == 1)	return nums[0];
    vector<int> tot(l);
    tot[0] = nums[0];
    tot[1] = max(nums[0], nums[1]);
    for (int i = 2; i < l-1; i++){
        tot[i] = max(tot[i-1], tot[i-2] + nums[i]);
    }
    int ret1 = tot[l-2];
    if (l == 2) return tot[l-1];
    tot[1] = nums[1];
    tot[2] = max(nums[2], nums[1]);
    for (int i = 3; i < l; i++){
        tot[i] = max(tot[i-1], tot[i-2] + nums[i]);
    }
    return max(ret1, tot[l-1]);
}
