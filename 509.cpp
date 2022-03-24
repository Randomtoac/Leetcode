#include <iostream>
using namespace std;

int fib(int);

int main(){
	int n = 29;
	cout << fib(n) << endl;

	return 0;
}

int fib(int n) {
	int fibn[35];
	fibn[0] = 0;
	fibn[1] = 1;
	for (int i = 2; i <= n; i++){
		fibn[i] = fibn[i-1] + fibn[i-2];
	} 
	return fibn[n];
}
