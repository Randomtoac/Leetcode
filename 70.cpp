#include <iostream>
using namespace std;

int climbStairs(int n);

int main(){
	int n = 3;
	cout << climbStairs(n) << endl;

	return 0;
}

int climbStairs(int n) {
	int methods[46];
	methods[1] = 1;
	methods[2] = 2;
	for (int i = 3; i <= n; i++){
		methods[i] = methods[i-1] + methods[i-2];
	}
	return methods[n];
}
