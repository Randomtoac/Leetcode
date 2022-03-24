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
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
        int n = floor.size();
        if(numCarpets * carpetLen >= n) return 0; 
        while (numCarpets--){
            int cnt = 0, index = 0, maxx = 0;
            for(int i = 0; i < n; ++i){
                if(floor[i] == '1') ++cnt;
                if(i >= carpetLen && floor[i-carpetLen] == '1') --cnt;
                if(cnt > maxx){
                	maxx = cnt;
                	index = i;
				}
            }
            if(!maxx) return 0; 
            for(int i = index ; i >= 0 && i > (index-carpetLen); --i) floor[i] = '0';
        }
        return count(floor.begin(), floor.end(), '1');
    }
};
