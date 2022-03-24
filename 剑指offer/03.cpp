#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findRepeatNumber(vector<int>& nums);
int main(){

	return 0;
}
int findRepeatNumber(vector<int>& nums){
	unordered_map<int, int> mp;
	for (int& x : nums){
		mp[x]++;
		if (mp[x] >= 2)	return x;
	}
	return -1;
}
