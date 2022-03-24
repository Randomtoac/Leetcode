#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int eraseOverlapIntervals(vector<vector<int>>& intervals);
int main(){

	return 0;
}
int eraseOverlapIntervals(vector<vector<int>>& intervals){
	if (!intervals.size())	return 0;
	sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b){
        return a[1] < b[1];
    });
	int right = intervals[0][1];
	int cnt = 1;
	for (int i = 1; i < intervals.size()-1; i++){
		if (intervals[i][0] >= right){
			cnt++;
			right = intervals[i][1];
		}
	}
	return intervals.size()-cnt;
}
