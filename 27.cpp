#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int fast = 0, slow = 0;
	while (fast < nums.size()){
		if (nums[fast] != val){
			nums[slow] = nums[fast];
			slow++;
		}
		fast++;
	}
	return slow;
}
    
int main(){
	vector<int> nums = {0,1,2,2,3,0,4,2};
	int q = removeElement(nums, 2);
	cout << q <<endl;
	for (int i = 0; i < q; i++){
		cout << nums[i] << ",";
	}

	return 0;
}

