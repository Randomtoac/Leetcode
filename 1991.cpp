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
    int findMiddleIndex(vector<int>& nums) {
		int n = nums.size();
		vector<int> presum(n+2, 0);
		for (int i = 1; i <= n; i++){
			presum[i] = presum[i-1] + nums[i-1];
		}
		for (int i = 1; i <= n; i++){
			if (presum[i-1] == presum[n] - presum[i])	return i-1;
		}
		return -1;
    }
};
