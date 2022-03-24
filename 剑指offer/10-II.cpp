#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int numWays(int n);
int main(){

	return 0;
}
int numWays(int n){
	vector<int> v(n+1, 1);
	const int mod = 1e9+7;
	for (int i = 2; i <= n; i++){
		v[i] = v[i-1] + v[i-2];
		v[i] %= mod;
	}
	return v[n];
}
