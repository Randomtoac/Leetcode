#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> findLonely(vector<int>& nums);
int main(){

	return 0;
}
vector<int> findLonely(vector<int>& nums){
	unordered_map<int, int> mp;
	for (int& num : nums){
		mp[num]++;
	}
	vector<int> ret;
	for (int& num : nums){
		if (mp[num] > 1 || mp[num] == 0)	continue;
		if (mp[num-1] || mp[num+1])	continue;
		ret.push_back(num);
	}
	return ret;
}
