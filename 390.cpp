#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int lastRemaining(int n); 
int main(){

	return 0;
}
int lastRemaining(int n){
	int cnt = n, a1 = 1, step = 1, k = 1;
	while (cnt > 1){
		if (k & 1){
			a1 = a1 + step;
		}
		else{
			a1 = cnt & 1 ? a1 : a1 + step;
		}
		k++;
		step <<= 1;
		cnt >>= 1;
	}
	return a1;
}
