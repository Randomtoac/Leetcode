#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minMoves(vector<int>& nums);
int main(){

	return 0;
}
int minMoves(vector<int>& nums){
	int n = nums.size();
	int ret = 0;
	int nmin = *min_element(nums.begin(), nums.end());
	for (int& num : nums){
		ret += num - nmin;
	}
	return ret;
}
