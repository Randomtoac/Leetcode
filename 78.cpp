#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> subsets(vector<int>& nums);
void backtracking(vector<int> last, vector<int>& nums, vector<vector<int>>& ret, int cur);
int main(){

	return 0;
}
vector<vector<int>> subsets(vector<int>& nums){
	vector<int> last;
	vector<vector<int>> ret;
	backtracking(last, nums, ret, 0);
	return ret;
}
void backtracking(vector<int> last, vector<int>& nums, vector<vector<int>>& ret, int cur){
	ret.push_back(last);
	for (int i = cur; i < nums.size(); i++){
		last.push_back(nums[i]);
		backtracking(last, nums, ret, i+1);
		last.pop_back();
	}
}
