#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarraySum(vector<int>& nums, int k);
int main(){

	return 0;
}
int subarraySum(vector<int>& nums, int k){
	int ret = 0, n = nums.size(), pre = 0;
	unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++){
        pre += nums[i];
        if (mp.find(pre - k) != mp.end()) {
            count += mp[pre - k];
        }
        mp[pre]++;
    }
	return ret;
}
