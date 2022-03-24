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
	int ret = 0, n = 0;
	long long ans = 1, max = 0;
    int countHighestScoreNodes(vector<int>& parents) {
    	n = parents.size();
        vector<int> left(n, -1), right(n, -1);
        int root = -1;
        for (int i = 0; i < n; i++){
        	if (parents[i] == -1){
        		root = i;
        		continue;
			}
			if (left[parents[i]] == -1)	left[parents[i]] = i;
			else	right[parents[i]] = i;
		}
		dfs(root, left, right);
		return ret;
    }
    int dfs(int root, vector<int>& left, vector<int>& right){
    	if (root < 0)	return 0;
    	int l = dfs(left[root], left, right);
    	int r = dfs(right[root], left, right);
        ans = 1;
    	if (l)	ans*= l;
    	if (r)	ans *= r;
    	if (n-1-l-r)	ans *= n-1-l-r;
    	if (ans > max){
    		ret = 1;
    		max = ans;
		}
		else if (ans == max){
			ret++;
		}
		return l + r + 1;
	}
};
