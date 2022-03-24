#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int majorityElement(vector<int>& nums);

int main(){

	return 0;
}
int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}
