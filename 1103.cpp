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
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ret(num_people,0);
        int i = 0;
        while (candies != 0) {
            ret[i % num_people] += min(candies, i + 1);
            candies -= min(candies, i + 1);
            i++;
        }
        return ret;
    }
};

