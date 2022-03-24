#include <iostream>
#include <vector>
using namespace std;
int jump(vector<int>& nums);
int main(){
	vector<int> nums = {1,2,2,0,4};
	cout << jump(nums) << endl;
	return 0;
}
int jump(vector<int>& nums) {
	int end = 0, maxp = 0, step = 0;
	for (int i = 0; i < nums.size()-1; i++){
		maxp = max(maxp, i + nums[i]);
		if (end == i){
			step++;
			end = maxp;
		}
	}
	return step;
}
