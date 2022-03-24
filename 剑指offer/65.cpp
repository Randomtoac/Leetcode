#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int add(int a, int b);
int main(){

	return 0;
}
int add(int a, int b){
	while (b){
		int c = a & b;
		a ^= b;
		b = (unsigned int)c << 1;
	}
	return a;
}
