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
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> edges(n+1);
		vector<int> degrees(n+1, 0);
		queue<int> q;
		for (vector<int>& v : relations){
			edges[v[0]].push_back(v[1]);
			degrees[v[1]]++;
		} 
		int ret = -1;
		vector<int> dp(n+1, -1);
		for (int i = 1; i <= n; i++){
			if (!degrees[i]){
				q.push(i);
				ret = max(ret, time[i-1]);
				dp[i] = time[i-1];
			}
		}
		while (!q.empty()){
			int cur = q.front();
			q.pop();
			for (int& next : edges[cur]){
				dp[next] = max(dp[next], dp[cur] + time[next-1]);
				ret = max(ret, dp[next]);
				degrees[next]--;
				if (!degrees[next])	q.push(next);
			}
		}
		return ret;
    }
};
