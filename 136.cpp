#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int singleNumber(vector<int>& nums);
int main(){
	vector<int> nums = {4,1,2,1,4};
	cout << singleNumber(nums) << endl;
	return 0;
}
int singleNumber(vector<int>& nums){
	int ret = 0;
	for (int i = 0; i < nums.size(); i++)	ret ^= nums[i];
	return ret;
}
