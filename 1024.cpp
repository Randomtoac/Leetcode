#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int videoStitching(vector<vector<int>>& clips, int time);
int main(){

	return 0;
}
bool cmp(vector<int> a, vector<int> b){
	return a[0] != b[0] ? a[0] < b[0] : a[1] > b[1];
}
int videoStitching(vector<vector<int>>& clips, int time){
	sort(clips.begin(), clips.end(), cmp);
	int n = clips.size();
	int start = 0, end = 0, ret = 0, i = 0;
	while (i < n && clips[i][0] <= start){
		while (i < n && clips[i][0] <= start){
			end = max(end, clips[i][1]);
			i++;
		}
		ret++;
		start = end;
		if (start >= time)	return ret;
	}
	return -1;
}
