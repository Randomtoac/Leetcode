#include <iostream>
#include <vector>
using namespace std;
bool canJump(vector<int>& nums);
int main(){
	vector<int> nums = {1,0,1,4,4};
	cout << canJump(nums) << endl;

	return 0;
}

bool canJump(vector<int>& nums) {
	int l = nums.size();
	vector<int> jumpto(l);
	jumpto[0] = 0;
	for (int i = 0; i < l; i++){
		jumpto[i+1] = max(i+nums[i], jumpto[i]);
		if (jumpto[i+1] <= i)	return false; 
	}
	if (jumpto[l-1] >= l-1)	return true;
	return false;
}

