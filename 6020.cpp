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
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x : nums){
        	mp[x]++;
		}
		for (auto [x, k] : mp){
			if (k&1)	return false;
		}
		return true;
    }
};
