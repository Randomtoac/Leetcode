#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> subsetsWithDup(vector<int>& nums);
void backtrack(vector<int> last, vector<int>& nums, vector<vector<int>>& ret, int cur, set<vector<int>>& st);
int main(){

	return 0;
}
vector<vector<int>> subsetsWithDup(vector<int>& nums){
	vector<int> last;
	vector<vector<int>> ret;
	set<vector<int>> st;
	sort(nums.begin(), nums.end());
	backtrack(last, nums, ret, 0, st);
	return ret;
}
void backtrack(vector<int> last, vector<int>& nums, vector<vector<int>>& ret, int cur, set<vector<int>>& st){
	if (!st.count(last)){
		ret.push_back(last);
		st.insert(last);
	}
	for (int i = cur; i < nums.size(); i++){
		last.push_back(nums[i]);
		backtrack(last, nums, ret, i+1, st);
		last.pop_back();
	}
}
