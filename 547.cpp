#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findCircleNum(vector<vector<int>>& isConnected);
void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int cur, int& n);
int main(){

	return 0;
}
int findCircleNum(vector<vector<int>>& isConnected){
	int n = isConnected.size();
	vector<bool> visited(n, false);
	int ret = 0;
	for (int i = 0; i < n; i++){
		if (!visited[i]){
			ret++;
			dfs(isConnected, visited, i, n);
		}
	}
	return ret;
}
void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int cur, int& n){
	visited[cur] = true;
	for (int i = 0; i < n; i++){
		if (isConnected[cur][i] && !visited[i]){
			dfs(isConnected, visited, i, n);
		}
	}
}
