#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numberOfArithmeticSlices(vector<int>& nums);
int main(){

	return 0;
}
int numberOfArithmeticSlices(vector<int>& nums) {
    int n = nums.size(), l = 0, ans = 0;
    for(int i = 2; i < n; i++)  
        nums[i] - nums[i-1] == nums[i-1] - nums[i-2] ? ans += ++l : l = 0;
    return ans;
}
