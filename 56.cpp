#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals);
int main(){

	return 0;
}
vector<vector<int>> merge(vector<vector<int>>& intervals){
	if (!intervals.size())	return {};
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> ret;
	for (int i = 0; i < intervals.size(); i++){
		if (!ret.size() || ret.back()[1] < intervals[i][0])
			ret.push_back(intervals[i]);
		else{
			ret.back()[1] = max(ret.back()[1], intervals[i][1]);
		}
	}
	return ret;
}
