#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxCount(int m, int n, vector<vector<int>>& ops);
int main(){

	return 0;
}
int maxCount(int m, int n, vector<vector<int>>& ops){
	int a = m, b = n;
	for (auto& v : ops){
		a = min(a, v[0]);
		b = min(b, v[1]);
	}
	return a*b;
}
