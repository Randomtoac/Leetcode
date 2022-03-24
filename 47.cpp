#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> permuteUnique(vector<int>& nums);
void backtracking(vector<int> last, vector<vector<int>>& ret, vector<bool>& visited,
				 set<vector<int>>& st, vector<int>& nums);
int main(){

	return 0;
}
vector<vector<int>> permuteUnique(vector<int>& nums){
	set<vector<int>> st;
	vector<int> last;
	vector<vector<int>> ret;
	vector<bool> visited(nums.size(), false);
	backtracking(last, ret, visited, st, nums);
	return ret;
}
void backtracking(vector<int> last, vector<vector<int>>& ret, vector<bool>& visited,
				 set<vector<int>>& st, vector<int>& nums){
	if (last.size() == nums.size()){
		if (!st.count(last)){
			ret.push_back(last);
			st.insert(last);
		}
		return;
	}
	for (int i = 0; i < nums.size(); i++){
		if (visited[i])	continue;
		last.push_back(nums[i]);
		visited[i] = true;
		backtracking(last, ret, visited, st, nums);
		visited[i] = false;
		last.pop_back();
	}	
}
