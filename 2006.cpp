#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countKDifference(vector<int>& nums, int k);
int main(){

	return 0;
}
int countKDifference(vector<int>& nums, int k){
	int ret = 0;
	for (int i = 0; i < nums.size()-1; i++){
		for (int j = i+1; j < nums.size(); j++){
			if (nums[i] - nums[j] == k || nums[j] - nums[i] == k){
				ret++;
			}
		}
	}
	return ret;
}
