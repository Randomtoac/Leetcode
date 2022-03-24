#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findNthDigit(int n);
int main(){

	return 0;
}
int findNthDigit(int n){
	if (n == 1)	return 0;
	int dig = 1, start = 1, count = 9;
	while (count < n){
		n -= count;
		start *= 10;
		dig++;
		count = 9*start*dig;
	}
	// n is the (n-1)th number in count beginning with start
	int num = start + (n - 1) / dig;
	return (int)(to_string(num)[(n-1)%dig] - '0');
}
