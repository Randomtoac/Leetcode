#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isPowerOfTwo(int n);
int main(){
	for (int i = 0; i < 2222; i++){
		if (isPowerOfTwo(i))	cout << i << endl;
	}
	if (-2147483648)	cout << "OHHHHHHH" << endl;
	return 0;
}
bool isPowerOfTwo(int n) {
	return n && !(n&(n-1));
}
