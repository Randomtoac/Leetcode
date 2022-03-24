#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if (nums.size() == 1){
        	if (k&1)	return -1;
        	else		return nums[0];
		}
		if (k == 1)	return nums[1];
		if (k == 0)	return nums[0];
		if (k > nums.size())	return *max_element(nums.begin(), nums.end());
		int maxx = -1;
		vector<int> fmax(nums.size()+1, 0);
		for (int i = 1; i <= nums.size(); i++){
			if (i < nums.size())	fmax[i] = max(maxx, nums[i]);
			else	fmax[i] = maxx;
			maxx = max(maxx, nums[i-1]);
		}
		return fmax[k];
    }
};
