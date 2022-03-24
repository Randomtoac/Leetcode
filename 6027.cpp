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
    int countHillValley(vector<int>& nums) {
        int ret = 0;
        vector<int> v;
        v.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++){
        	if (nums[i] != v.back())	v.push_back(nums[i]);
		}
        for (int i = 1; i < v.size()-1; i++){
        	if (v[i] > v[i-1] && v[i] > v[i+1])	ret++;
        	else if (v[i] < v[i-1] && v[i] < v[i+1])	ret++;
		}
		return ret;
    }
};
