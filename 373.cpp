#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k);
int main(){

	return 0;
}
static bool cmp(pair<int, int>& a, pair<int, int>& b){
	
}
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k){
	auto cmp = [&nums1, &nums2](pair<int, int>& a, pair<int, int>& b){
		return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
	};
	int m = nums1.size(), n = nums2.size();
	vector<vector<int>> ret;
	priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
	for (int i = 0; i < min(k, m); i++){
		pq.emplace(i, 0);
	}
	while (k-- && !pq.empty()){
		auto [x, y] = pq.top();
		pq.pop();
		ret.emplace_back(initializer_list<int>{nums1[x], nums2[y]});
		if (y + 1 < n){
			pq.emplace(x, y+1);
		}
	}
	return ret;
}
