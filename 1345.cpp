#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
int minJumps(vector<int>& arr);
int main(){

	return 0;
}
int minJumps(vector<int>& arr){
	unordered_map<int, vector<int>> mp;
	unordered_set<int> visited;
	for (int i = 0; i < arr.size(); i++)	mp[arr[i]].push_back(i);
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	visited.insert(0);
	while (!q.empty()){
		auto [x, step] = q.front();
		q.pop();
		if (x == arr.size()-1){
			return step;
		}
		int num = arr[x];
		step++;
		if (mp.count(num)){
			for (int& i : mp[num]){
				if (!visited.count(i)){
					visited.insert(i);
					q.push(make_pair(i, step));
				}
			}
			mp.erase(num);
		}
		if (x - 1 >= 0 && !visited.count(i-1)){
			visited.insert(i-1);
			q.push(make_pair(i-1, step));
		}
		if (x + 1 < arr.size() && !visited.count(i+1)){
			visited.insert(i+1);
			q.push(make_pair(i+1, step));
		}
		return -1;
	}
}
