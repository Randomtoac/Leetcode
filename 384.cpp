#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
private:
	vector<int> origin;
	vector<int> v;
	void swapAtxy(vector<int>& v, int x, int y){
		int r = rand() % (y-x) + x;
		swap(v[x], v[r]);
	}
public:
    Solution(vector<int>& nums) {
		origin = nums;
		v = nums;
    }
    
    vector<int> reset() {
		return origin;
    }
    
    vector<int> shuffle() {
		for (int i = 0; i < v.size(); i++){
			swapAtxy(v, i, v.size());
		}
		return v;
    }
};
