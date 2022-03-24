#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int trailingZeroes(int n);
int main(){

	return 0;
}
int trailingZeroes(int n){
	int ret = 0;
	while (n){
		ret += n/5;
		n /= 5;
	}
	return ret;
} 
