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
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keys, ret;
        for (int i = 0; i < nums.size(); i++){
        	if (nums[i] == key)	keys.push_back(i);
		}
		int last = 0;
		for (int& x : keys){
			int start = x-k > last ? x-k : last;
			int end = x+k < nums.size() ? x+k : nums.size()-1;
			for (int i = start; i <= end; i++)	ret.push_back(i);
			last = end+1;
		}
		return ret;
    }
};
