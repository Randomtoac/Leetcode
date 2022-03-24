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
    bool check(vector<int>& nums) {
		if (nums.size() == 1)	return true;
		bool flag = false;
		for (int i = 1; i < nums.size(); i++){
			if (nums[i] < nums[i-1]){
				if (flag)	return false;
				flag = true;
			}
		}
		return !flag || nums.back() <= nums[0];
    }
};
