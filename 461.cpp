#include <iostream>
using namespace std;

int hammingDistance(int x, int y) {
	int bit = 1;
	int res = 0;
	for (int i = 1; i < 32; i++){
		if ((bit&x)^(bit&y))	res++;
		bit <<= 1;
	}
	return res;
}

int main(){
	int a = 1, b = 2;
	cout << hammingDistance(a, b) << endl;

	return 0;
}

