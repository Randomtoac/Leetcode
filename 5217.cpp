#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums);
int main(){

	return 0;
}
static bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
	if (a.first != b.first)
		return a.first < b.first;
	return a.second.first < b.second.first;
}
vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums){
	vector<pair<int, pair<int, int>>> needsort;
	vector<int> ret;
	for (int i = 0; i < nums.size(); i++){
		string s = to_string(nums[i]);
		string news;
		for (char& ch : s){
			news.push_back((char)('0'+mapping[ch-'0']));
		}
		needsort.push_back(make_pair(stoi(news), make_pair(i, nums[i])));
	}
	sort(needsort.begin(), needsort.end(), cmp);
	for (auto& x : needsort){
		ret.push_back(x.second.second);
	}
	return ret;
}
