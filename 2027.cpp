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
    int minimumMoves(string s) {
        int ret = 0;
        for (int i = 0; i < s.length();){
        	if (s[i] == 'X'){
        		ret++;
        		i += 3;
			}
			else	i++;
		}
		return ret;
    }
};
