#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int wiggleMaxLength(vector<int>& nums);
int main(){

	return 0;
}
int wiggleMaxLength(vector<int>& nums){
	int n = nums.size();
	if (n == 1)	return 1;
	vector<int> pos(n, 1);
	vector<int> neg(n, 1);
	for (int i = 1; i < n; i++){
		for (int j = 0; j < i; j++){
			if (nums[i] > nums[j]){
				pos[i] = max(pos[i], neg[j]+1);
			}
			else if (nums[i] < nums[j]){
				neg[i] = max(neg[i], pos[j]+1);
			}
		}
	}
	return max(pos[n-1], neg[n-1]);
}
