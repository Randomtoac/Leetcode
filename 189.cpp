#include <iostream>
#include <vector>
using namespace std;
void rev(vector<int>& nums, int m, int n);
void rotate(vector<int>& nums, int k);
int main(){
	vector<int> nums = {1,2,3,4,5,6,7};
	rotate(nums, 0);
	for (int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
	return 0;
}
void rev(vector<int>& nums, int m, int n){
	while(m < n){
		int t = nums[m];
		nums[m++] = nums[n];
		nums[n--] = t;
	}
}
void rotate(vector<int>& nums, int k) {
	k %= nums.size();
	rev(nums, 0, nums.size()-1);
	rev(nums, 0, k-1);
	rev(nums, k, nums.size()-1);
}
