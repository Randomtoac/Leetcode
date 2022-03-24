#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int findJudge(int n, vector<vector<int>>& trust);
int main(){

	return 0;
}
int findJudge(int n, vector<vector<int>>& trust){
	vector<int> alternate;
	unordered_map<int, int> mp;
	vector<bool> tr(n+1, false);
	for (auto& it : trust){
		mp[it[1]]++;
		tr[it[0]] = true;
	}
	for (int i = 1; i <= n; i++){
		if (mp[i] == n-1 && !tr[i])	alternate.push_back(i);
	}
	if (alternate.size() == 1)	return alternate[0];
	return -1;
}
