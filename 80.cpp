#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int removeDuplicates(vector<int>& nums);
int main(){

	return 0;
}
int removeDuplicates(vector<int>& nums){
	int i = 0, j = 0, cnt = 0;
	for (; j < nums.size(); j++){
		if (nums[j] != nums[i]){
			i = j;
			cnt = 1;
		}
		else{
			cnt++;
			if (cnt > 2){
				nums.erase(nums.begin()+j);
				j--;
			}
		}
	}
	return j;
}
//int removeDuplicates(vector<int>& nums){
//	unordered_map<int, int> mp;
//	for (auto it = nums.begin(); it != nums.end();){
//		if (mp[*it] < 2){
//			mp[*it++]++;
//		}
//		else{
//			nums.erase(it);
//		}
//	}
//	return nums.size();
//}
