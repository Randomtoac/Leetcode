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
    int waysToPartition(vector<int>& nums, int k) {
    	int n = nums.size();
		vector<long long> sum(n, nums[0]);
		unordered_map<long long, int> mp, last;
		for (int i = 1; i < n; i++){
			sum[i] = sum[i-1] + nums[i];
			mp[sum[i-1]]++;
		} 
		int ans = 0;
		long long total = sum[n-1];
		if (total % 2 == 0)	ans = mp[total / 2];
		for (int i = 0; i < n; i++){
			int d = k - nums[i];
			if ((total+d) % 2 == 0){
				ans = max(ans, mp[(total-d) / 2] + last[(total+d) / 2]);
			}
			mp[sum[i]]--;
			last[sum[i]]++;
		}
		return ans;
    }
};
