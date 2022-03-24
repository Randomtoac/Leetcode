#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int dominantIndex(vector<int>& nums);
int main(){

	return 0;
}
int dominantIndex(vector<int>& nums){
	if (nums.size() < 2)	return 0;
	int maxind = 0, maxx = nums[0];
	int secind = -1, sec = 0;
	for (int i = 1; i < nums.size(); i++){
		if (nums[i] > maxx){
			secind = maxind;
			sec = maxx;
			maxind = i;
			maxx = nums[i];
		}
		else if (nums[i] > sec){
			secind = i;
			sec = nums[i];
		}
		cout << maxx << " " << maxind << " " << sec << endl;
	}
	return maxx >= 2 * sec ? maxind : -1;
}
