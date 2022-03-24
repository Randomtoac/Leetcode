#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n);
int main(){

	return 0;
}
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n){
	vector<vector<int>> ret;
	if (original.size() != m*n)	return ret;
	ret.resize(m);
	for (auto& v : ret){
		v.resize(n);
	}
	int x = 0, y = 0;
	for (int& num : original){
		if (y == n){
			y = 0;
			x++;
		}
		ret[x][y] = num;
		y++;
	}
	return ret;
}
