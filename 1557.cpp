#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges);
int main(){

	return 0;
}
vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges){
	vector<int> ret, in(n, 0);
	for (auto& e : edges){
		in[e[1]]++;
	}
	for (int i = 0; i < n; i++){
		if (!in[i])	ret.push_back(i);
	}
	return ret;
}
