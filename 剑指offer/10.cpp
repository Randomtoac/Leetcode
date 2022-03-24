#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int fib(int n);
int main(){

	return 0;
}
int fib(int n){
	vector<int> f(n+2, 0);
	f[1] = 1;
	for (int i = 2; i <= n; i++){
		f[i] = (f[i-1] + f[i-2]) % (int)(1e9+7);
	}
	return f[n];
}
