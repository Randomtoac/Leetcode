#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
double myPow(double x, int n);
int main(){

	return 0;
}
double myPow(double x, int n){
	if (n == 0)		return 1.0;
	long long t = n;
	return n > 0 ? helper(x, t) : 1 / helper(x, -t);
}
double helper(double x, long long n){
	if (n == 1)	return x;
	double ret = 1.0;
	if (n % 2 == 1)	ret *= x;
	double half = myPow(x, n/2);
	return ret*half*half;
}
