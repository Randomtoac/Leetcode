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
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        int maxx = 0, maxi = 0, bl = 0;
        for (int i = 0; i < (1 << 12); i++){
        	int cnt = 0, total = 0;
        	for (int j = 0; j < 11; j++){
        		if (i & (1 << j)){
        			cnt += aliceArrows[11-j] + 1;
					total += 11-j;
				}
				if (cnt > numArrows)	continue;
				if (total > maxx){
					maxx = total;
					maxi = i;
					bl = numArrows - cnt;
				}
			}
		}
		vector<int> ret(12, 0);
		for (int i = 0; i < 12; i++){
			if (maxi & (1 << i)){
				ret[11-i] = aliceArrows[11-i] + 1;
			}
		}
		ret[0] += bl; 
		return ret;
    }
};
