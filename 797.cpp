#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph);
void dfs(vector<vector<int>>& ret, int begin, int end, vector<vector<int>>& graph, vector<int> temp);
int main(){

	return 0;
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){
	vector<int> temp;
	vector<vector<int>> ret;
	int n = graph.size();
	temp.push_back(0);
	dfs(ret, 0, n-1, graph, temp);
	return ret;
}
void dfs(vector<vector<int>>& ret, int begin, int end, vector<vector<int>>& graph, vector<int> temp){
	if (begin == end){
		ret.push_back(temp);
		return;
	}
	for (int& i : graph[begin]){
		temp.push_back(i);
		dfs(ret, i, end, graph, temp);
		temp.pop_back();
	}
}
