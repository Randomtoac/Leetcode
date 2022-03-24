#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target);
void backtracking(vector<vector<int>>& ret, vector<int>& nums, vector<int>& last, int begin, long long target);
int main(){

	return 0;
}
vector<vector<int>> fourSum(vector<int>& nums, int target){
	vector<int> last;
	vector<vector<int>> ret;
	if (nums.size() < 4)	return ret;
	sort(nums.begin(), nums.end());
	backtracking(ret, nums, last, 0, (long long)target);
	return ret;
}
void backtracking(vector<vector<int>>& ret, vector<int>& nums, vector<int>& last, int begin, long long target){
	int n = last.size();
	if (n == 4){
		if (target == 0)	ret.push_back(last);
		return;
	}
	if ((long long)(4-n)*nums[begin] > target)	return;
	if ((long long)(4-n)*nums[nums.size()-1] < target)	return;
	int lastnum = 0x3f3f3f3f;
	for (int i = begin; i < nums.size()-3+n; i++){
		if (nums[i] == lastnum)	continue;
		lastnum = nums[i];
		last.push_back(nums[i]);
		backtracking(ret, nums, last, i+1, target-nums[i]);
		last.pop_back();
	}
}
