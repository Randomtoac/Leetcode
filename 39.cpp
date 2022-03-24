#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> combinationSum(vector<int>& candidates, int target);
void backtracking(vector<int> last, vector<vector<int>>& ret, vector<int>& candidates, int left, int target);
int main(){

	return 0;
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target){
	vector<int> last;
	vector<vector<int>> ret;
	int left = 0;
	backtracking(last, ret, candidates, left, target);
	return ret;
}
void backtracking(vector<int> last, vector<vector<int>>& ret, vector<int>& candidates, int left, int target){
	if (target < 0)	return;
	if (target == 0){
		ret.push_back(last);
		return;
	}
	for (int i = left; i < candidates.size(); i++){
		last.push_back(candidates[i]);
		backtracking(last, ret, candidates, i, target-candidates[i]);
		last.pop_back();
	}
}
