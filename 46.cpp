#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> permute(vector<int>& nums);
void nextlevel(vector<int>& nums, vector<bool>& visited, vector<int>& last, vector<vector<int>>& ret);
int main(){

	return 0;
}
void nextlevel(vector<int>& nums, vector<bool>& visited, vector<int>& last, vector<vector<int>>& ret){
	if (last.size() == nums.size()){
		ret.push_back(last);
		return;
	}
	for (int i = 0; i < nums.size(); i++){
		if (visited[i])	continue;
		last.push_back(nums[i]);
		visited[i] = true;
		nextlevel(nums, visited, last, ret);
		last.pop_back();
		visited[i] = false;
	}
}
vector<vector<int>> permute(vector<int>& nums){
	vector<vector<int>> ret;
	vector<int> last;
	vector<bool> visited(nums.size(), false);
	nextlevel(nums, visited, last, ret);
	return ret;
}
