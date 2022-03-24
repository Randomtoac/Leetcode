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
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> cnt(101, 0), ret;
        for (int x : nums1){
        	cnt[x] = 1;
		}
		for (int x : nums2){
			if (cnt[x] == 1){
				cnt[x] = 4;
				ret.push_back(x);
			}	
			else if (cnt[x] == 0)	cnt[x] = 2;
		}
		for (int x : nums3){
			if (cnt[x] == 1 || cnt[x] == 2){
				cnt[x] = 5;
				ret.push_back(x);
			}
		}
		return ret;
    }
};
