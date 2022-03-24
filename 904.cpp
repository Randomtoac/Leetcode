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
    int totalFruit(vector<int>& fruits) {
    	unordered_map<int, int> mp;
    	int left = 0, len = 0, ret = 0;
    	for (int i = 0; i < fruits.size(); i++){
    		len++;
    		mp[fruits[i]]++;
    		while (mp.size() > 2){
    			if (--mp[fruits[left]] == 0)	mp.erase(fruits[left]);
    			left++;
    			len--;
			}
			ret = max(ret, len);
		}
		return ret;
    }
};
