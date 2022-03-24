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
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& patience) {
        int n = patience.size();
		vector<int> len(n, 0);
		vector<vector<int>> nextnode(n);
		for (auto& v : edges){
			nextnode[v[0]].push_back(v[1]);
			nextnode[v[1]].push_back(v[0]);
		}
		queue<int> q;
		q.push(0);
		int curlen = 0;
		while (!q.empty()){
			int cursize = q.size();
			curlen++;
			for (int i = 0; i < cursize; i++){
				int curnode = q.front();
				q.pop();
				for (int x : nextnode[curnode]){
					if (!len[x]){
						q.push(x);
						len[x] = curlen*2;
					}
				}
			}
		}
		int ret = 0;
		for (int i = 1; i < n; i++){
			int times = len[i] % patience[i] ? len[i]/patience[i]+1 : len[i]/patience[i];
			int total = patience[i] * (times-1) + len[i] + 1;
			ret = max(ret, total); 
		}
		return ret;
    }
};
