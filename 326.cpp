#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isPowerOfThree(int n); 
int main(){
	cout << isPowerOfThree(1) << endl;
	return 0;
}
bool isPowerOfThree(int n){
	long long i = 1;
	while(i <= n){
		if (i == n)	return true;
		i *= 3;
	}
	return false;
}
