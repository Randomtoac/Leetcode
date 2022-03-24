
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void moveZeroes(vector<int>& nums);
int main(){
	vector<int> nums = {0,1,0,3,12};
	moveZeroes(nums);
	for (int i = 0; i < nums.size(); i++){
		cout << nums[i] << " ";
	}
	return 0;
}
void moveZeroes(vector<int>& nums) {
	int count = 0, p = 0, q = 0;
	for (;q < nums.size(); q++){
		if (nums[q] == 0){
			count++;
		}
		else{
			nums[p++] = nums[q];
		}
	}
	while (p < nums.size()){
		nums[p++] = 0;
	}
}
