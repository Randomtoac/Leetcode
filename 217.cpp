#include <iostream>
#include <vector>
#include <set> 
using namespace std;
bool containsDuplicate(vector<int>& nums);
int main(){
	vector<int> nums = {1,2,3,4};
	cout << containsDuplicate(nums) << endl;

	return 0;
}

bool containsDuplicate(vector<int>& nums) {
	set<int> s;
	for (int i = 0; i < nums.size(); i++){
		if (s.count(nums[i]))	return true;
		s.insert(nums[i]);
	}
	return false;
}
