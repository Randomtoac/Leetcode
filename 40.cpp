#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
void backtracking(vector<int> last, vector<vector<int>>& ret, vector<int>& candidates, int left, int target);
int main(){

	return 0;
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
	sort(candidates.begin(), candidates.end());
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
	int lastnum = 0;
	for (int i = left; i < candidates.size(); i++){
		if (candidates[i] == lastnum)	continue;
		lastnum = candidates[i];
		last.push_back(lastnum);
		backtracking(last, ret, candidates, i+1, target-lastnum);
		last.pop_back();
	}
}
