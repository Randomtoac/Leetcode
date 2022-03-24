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
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int half = (nums.size()+1) / 2;
        int p = half-1, q = nums.size()-1;
        vector<int> ret;
        while (q >= half){
        	ret.push_back(nums[p--]);
        	ret.push_back(nums[q--]);
		}
		if (p == 0)	ret.push_back(nums[p]);
		nums = ret;
    }
};
