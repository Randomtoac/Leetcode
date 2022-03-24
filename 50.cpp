#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
double myPow(double x, int n);
double quickmultiple(double x, int n);
int main(){

	return 0;
}
double myPow(double x, int n){
	long long N = n;
	return N > 0 ? quickmultiple(x, N) : 1 / quickmultiple(x, -N);
}
double quickmultiple(double x, long long n){
	if (n == 0)	return 1;
	if (n == 1)	return x;
	double y = quickmultiple(x, n/2);
	return n % 2 ? y * y * x : y * y;
} 
