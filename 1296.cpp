#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isPossibleDivide(vector<int>& nums, int k);
int main(){

	return 0;
}
bool isPossibleDivide(vector<int>& nums, int k){
	if (!nums.size()%k)	return false;
	unordered_map<int, int> m;
	sort(nums.begin(), nums.end());
	for (int& num : nums){
		m[num]++;
	}
	for (int& num : nums){
		if (!m[num])	continue;
		for (int i = 0; i < k; i++){
			if (!m[num+i])	return false;
			m[num+i]--;
			if (m[num+i] == 0)	m.erase(num+i);
		}
	}
	return true;
}
