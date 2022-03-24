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
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
		vector<string> ret;
		unordered_map<string, int> mp;
		for (int i = 0; i < list1.size(); i++){
			mp[list1[i]] = i;
		} 
		int minn = INT_MAX;
		for (int i = 0; i < list2.size(); i++){
			if (mp.count(list2[i])){
				if (mp[list2[i]] + i < minn){
					ret.clear();
					ret.push_back(list2[i]);
					minn = mp[list2[i]] + i;
				}
				else if (mp[list2[i]] + i == minn){
					ret.push_back(list2[i]);
				}
			}
		}
		return ret;
    }
};
