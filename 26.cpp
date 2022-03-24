#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (!nums.size())	return 0;
	int last = nums[0];
	for (int i = 1; i < nums.size(); i++){
		if (nums[i] == last){
			nums.erase(nums.begin()+i-1);
			i--;
		}
		else{
			last = nums[i];
		}
	}
	return nums.size();
}

int main(){
	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
	cout << removeDuplicates(nums) <<endl;
	for (int i = 0; i < nums.size(); i++){
		cout << nums[i] << ",";
	}

	return 0;
}

