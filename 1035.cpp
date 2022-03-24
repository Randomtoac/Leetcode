#include <iostream>
#include <vector>
using namespace std;

int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
	int m = nums1.size(), n = nums2.size();
	vector<vector<int>> dp(m+1, vector<int>(n+1));
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			if (nums1[i-1] == nums2[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	return dp[m][n];
}

int main(){
	vector<int> n1 = {2,5,1,2,5}, n2 = {10,5,2,1,5,2};
	int output = maxUncrossedLines(n1, n2);
	cout << output << endl;

	return 0;
}
