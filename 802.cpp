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
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
		queue<int> q;
		int n = graph.size();
		vector<vector<int>> edgesin(n);
		vector<int> degrees(n);
		for (int i = 0; i < n; i++){
			for (int& x : graph[i]){
				edgesin[x].push_back(i);
			}
			degrees[i] = graph[i].size();
		}
		for (int i = 0; i < n; i++){
			if (!degrees[i])	q.push(i);
		}
		vector<int> ret;
		while (!q.empty()){
			int cur = q.front();
			q.pop();
			ret.push_back(cur);
			for (int& x : edgesin[cur]){
				degrees[x]--;
				if (!degrees[x])	q.push(x);
			}
		}
		sort(ret.begin(), ret.end());
		return ret;
    }
};
