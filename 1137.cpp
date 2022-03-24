#include <iostream>
using namespace std;

int tribonacci(int);

int main(){
	int n = 25;
	cout << tribonacci(n) << endl;

	return 0;
}

int tribonacci(int n) {
	int t[38];
	t[0] = 0;
	t[1] = 1;
	t[2] = 1;
	for (int i = 3; i <= n; i++){
		t[i] = t[i-1] + t[i-2] + t[i-3];
	} 
	return t[n];
}
