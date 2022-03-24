#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int hammingWeight(uint32_t n);
int main(){
	uint32_t n = 0xfffffffd;
	cout << hammingWeight(n) << endl;
	return 0;
}
int hammingWeight(uint32_t n){
	int cnt = 0;
	while(n){
		cnt += n&1;
		n >>= 1;
	}
	return cnt;
} 
