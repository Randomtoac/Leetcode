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
    int largestPerimeter(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = nums.size()-1; i >= 2; i--){
			if (nums[i] < nums[i-1] + nums[i-2])
				return nums[i] + nums[i-1] + nums[i-2];
		}
		return 0;
    }
};
