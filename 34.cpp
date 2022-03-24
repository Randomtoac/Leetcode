#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target);
int main(){

	return 0;
}
vector<int> searchRange(vector<int>& nums, int target){
	int first = -1, second = -1;
	for (int i = 0; i < nums.size(); i++){
		if (nums[i] == target){
			if (first == -1){
				first = i;
			}
			second = i;
		}
		if (nums[i] > target)	break;
	}
	return {first, second};
}
