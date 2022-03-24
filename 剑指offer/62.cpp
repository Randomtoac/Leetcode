#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int lastRemaining(int n, int m);
int main(){

	return 0;
}
int lastRemaining(int n, int m){
	int x = 0;
	for (int i = 2; i <= n; i++){
		x = (x + m) % i;
	}
	return x;
}
