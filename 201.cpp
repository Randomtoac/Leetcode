#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int rangeBitwiseAnd(int left, int right);
int main(){

	return 0;
}
int rangeBitwiseAnd(int left, int right){
	int shift = 0;
	while (left != right){
		left >>= 1;
		right >>= 1;
		shift++;
	}
	return left << shift;
}
