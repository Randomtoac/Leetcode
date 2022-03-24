#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time);
bool havefalse(vector<bool>& v);
int main(){

	return 0;
}
int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time){
	vector<bool>  visited(n+1, false);
	visited[0] = true;
	vector<int> dp(n+1, 0);
	while (havefalse(visited)){
		vector<bool> havepre(n+1, false);
		for (auto& r : relations){
			havepre[r[1]] = true;
			printv(r);
		}
		for (int i = 1; i <= n; i++){
			if (visited[i])	continue;
			if (!havepre[i]){
				dp[i] += time[i-1];
				visited[i] = true;
				for (int j = 0; j < relations.size(); j++){
					if (relations[j][0] == i){
						dp[relations[j][1]] = max(dp[i], dp[relations[j][1]]);
						relations.erase(relations.begin()+j);
						j--;
					}
				}
			}
		}
	}
	return *max_element(dp.begin(), dp.end());
}
bool havefalse(vector<bool>& v){
	for (int i = 0; i < v.size(); i++){
		if (!v[i])	return true;
	}
	return false;
}
void printb(vector<int>& b){
	for (int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
	}
	cout << endl;
}
