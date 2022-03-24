#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
uint32_t reverseBits(uint32_t n);
int main(){
	uint32_t n = 4294967293;
	cout << reverseBits(n) << endl;
	return 0;
}
uint32_t reverseBits(uint32_t n){
	uint32_t ret = 0;
	for (int i = 0; i < 32 && n; i++){
		ret += (n & 1) << (31 - i);
		n >>= 1;
	}
	return ret;
}
