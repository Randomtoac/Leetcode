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
    int kIncreasing(vector<int>& arr, int k) {
        int ret = 0, n = arr.size();
        vector<int> dp(n, 1);
        for (int i = k; i < n; i++){
        	for (int j = i % k; j < i; j += k){
        		if (arr[j] <= arr[i])	dp[i] = max(dp[i], dp[j]+1);
			}
			if (i >= n - k){
				ret += i/k + 1 - dp[i]; 
			}
		}
		return ret;
    }
};

