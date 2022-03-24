#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double sum = 0.0, total = 0.0;
        for (auto x : nums){
        	double cur = (double)x;
        	sum += cur / 2.0;
        	pq.push(cur);
		}
		int ret = 0;
		while(total < sum){
			double cur = pq.top() / 2.0;
			pq.pop();
			total += cur;
			ret++;
			pq.push(cur);
		}
		return ret;
    }
};
