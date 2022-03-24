#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
string destCity(vector<vector<string>>& paths);
int main(){

	return 0;
}
string destCity(vector<vector<string>>& paths){
	unordered_map<string, int> mp;
	for (int i = 0; i < paths.size(); i++){
		mp[paths[i][0]]++;
		mp[paths[i][1]]--;
	}
	for (int i = 0; i < paths.size(); i++){
		if (mp[paths[i][1]] == -1)	return paths[i][1];
	}
	return "";
}
