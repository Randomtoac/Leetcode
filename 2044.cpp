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
    int countMaxOrSubsets(vector<int>& nums) {
        int maxx = -1;
		int ret = 1;
		for (int i = 1; i < (1 << nums.size()); i++){
			check(maxx, ret, nums, i);
		} 
		return ret;
    }
    void check(int& maxx, int& ret, vector<int>& nums, int cur){
    	int result = 0;
    	for (int i = 0; i < nums.size(); i++){
    		if ((1 << i) & cur){
    			result |= nums[i];
			}
		}
		if (result > maxx){
			ret = 1;
			maxx = result;
		}
		else if (result == maxx)	ret++;
	}
};
