#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums);
int main(){

	return 0;
}
vector<int> rearrangeArray(vector<int>& nums){
	vector<int> ret, pos, neg;
	for (int i = 0; i < nums.size(); i++){
		if (nums[i] > 0)	pos.push_back(nums[i]);
		else	neg.push_back(nums[i]);
	}
	for (int i = 0; i < nums.size(); i++){
		ret.push_back(pos[i]);
		ret.push_back(neg[i]);
	}
	return ret;
}
