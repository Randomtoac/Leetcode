#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countElements(vector<int>& nums);
int main(){

	return 0;
}
int countElements(vector<int>& nums){
	unordered_map<int, int> mp;
	int minn = nums[0], maxx = nums[0];
	for (int& num : nums){
		mp[num]++;
		minn = min(minn, num);
		maxx = max(maxx, num);
	}
	int ret = nums.size() - mp[minn] - mp[maxx];
	return ret > 0 ? ret : 0;
}
