#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maximumANDSum(vector<int>& nums, int numSlots);
int main(){

	return 0;
}
int maximumANDSum(vector<int>& nums, int numSlots){
	unordered_map<int, int> mp;
	int ret = 0;
	vector<int> newnums;
	for (int& x : nums){
		if (x <= numSlots && mp[x] < 2){
			ret += x;
			mp[x]++;
		}
		else	newnums.push_back(x);
	}
	backtracking(ret, newnums, numSlots, mp, 0, false);
	return ret;
}
void backtracking(int& ret, vector<int>& nums, int numSlots, unordered_map<int, int>& mp, int start, bool endflag){
	if (start == nums.size()){
		endflag = true;
		return;
	}	
	for (int i = 1; i < numSlots; i++){
		if (mp[i] < 2){
			mp[i]++;
			int t = nums[start] & i;
			ret += t;
			backtracking(ret, nums, numSlots, mp, start+1);
			if (endflag)	return;
			ret -= t;
			mp[i]--;
		}
	}
}

