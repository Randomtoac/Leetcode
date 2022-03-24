#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int hammingWeight(uint32_t n);
int main(){

	return 0;
}
int hammingWeight(uint32_t n){
	int ret = 0;
	while (n){
		ret += n & 1;
		n >>= 1;
	}
	return ret;
}
