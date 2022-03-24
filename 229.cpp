#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> majorityElement(vector<int>& nums);
int main(){

	return 0;
}
vector<int> majorityElement(vector<int>& nums){
	unordered_map<int, int> mp;
	for (int& i : nums){
		mp[i]++;
	}
	int least = nums.size()/3;
	vector<int> ret;
	for (auto& [i, cnt] : mp){
		if (cnt > least){
			ret.push_back(i);
		}
	}
	return ret;
}

