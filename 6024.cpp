#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int mostFrequent(vector<int>& nums, int key);
int main(){

	return 0;
}
int mostFrequent(vector<int>& nums, int key){
	unordered_map<int, int> mp;
	int ret = -1, cnt = -1;
	for (int i = 0; i < nums.size()-1; i++){
		if (nums[i] == key){
			mp[nums[i+1]]++;
			if (mp[nums[i+1]] > cnt){
				cnt = mp[nums[i+1]];
				ret = nums[i+1];
			}
		}
	}
	return ret;
}
