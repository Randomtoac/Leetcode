#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int cuttingRope(int n);
int main(){

	return 0;
}
int cuttingRope(int n){
	if (n < 4)	return n-1;
	long long ret = 1;
	const int mod = 1e9+7;
	while (n > 4){
		ret *= 3;
		ret %= mod; 
		n -= 3;
	}
	return (int)(n*ret%mod);
}
