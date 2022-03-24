#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int missingNumber(vector<int>& nums);
int main(){

	return 0;
}
int missingNumber(vector<int>& nums){
	int ret = 0;
	for (int i = 0; i < nums.size(); i++){
		ret ^= i;
		ret ^= nums[i];
	}
	return ret ^ nums.size();
}
