#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minimumSum(int num);
int main(){

	return 0;
}
int minimumSum(int num){
	vector<int> nums;
	for (int i = 0; i < 4; i++){
		int x = num % 10;
		nums.push_back(x);
		num /= 10;
	}
	sort(nums.begin(), nums.end());
	return 10 * (nums[0] + nums[1]) + nums[2] + nums[3];
}
