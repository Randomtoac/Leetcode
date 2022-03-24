#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countPrimes(int n);
int main(){

	return 0;
}
int countPrimes(int n){
	vector<int> isPrime(n, 1);
	int ret = 0;
	for (int i = 2; i < n; i++){
		if (isPrime[i]){
			ret++;
			if ((long long) i * i < n){
				for (int j = i * i; j < n; j += i){
					isPrime[j] = 0;
				}
			}
		}	
	}
	return ret;
}

