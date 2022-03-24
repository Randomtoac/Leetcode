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
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		int maxx = *max_element(candies.begin(), candies.end()) - extraCandies;
		vector<bool> ret(candies.size(), false);
		for (int i = 0; i < candies.size(); i++){
			if (candies[i] >= maxx){
				ret[i] = true;
			}
		}
		return ret;
    }
};
