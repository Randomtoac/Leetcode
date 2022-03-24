#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <unordered_set>
using namespace std;
bool canVisitAllRooms(vector<vector<int>>& rooms);
int main(){

	return 0;
}
bool canVisitAllRooms(vector<vector<int>>& rooms){
	int n = rooms.size();
	queue<int> q;
	unordered_set<int> st;
	st.insert(0);
	for (auto& key : rooms[0]){
		if (st.count(key))	continue;
		q.push(key);
		st.insert(key);
	}
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for (auto& key : rooms[cur]){
			if (st.count(key))	continue;
			q.push(key);
			st.insert(key);
		}
	}
	st.erase(0);
	if (st.size() == n-1)	return true;
	return false;
}
