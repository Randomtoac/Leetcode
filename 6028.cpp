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
    int countCollisions(string directions) {
        int ret = 0, n = directions.size();
        for (int i = 1; i < n; i++){
        	if (directions[i] == 'L'){
        		if (directions[i-1] != 'L'){
        			ret++;
        			directions[i] = 'S';
				}
			}
		}
		for (int i = n-2; i >= 0; i--){
			if (directions[i] == 'R'){
				if (directions[i+1] != 'R'){
					ret++;
					directions[i] = 'S';
				}
			}
		}
		return ret;
    }
};
