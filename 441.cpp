#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int arrangeCoins(int n);
int main(){
	for (int i = 1; i < 99; i++){
		cout << i << "\t" << arrangeCoins(i) << endl;
	}
	return 0;
}
int arrangeCoins(int n){
	long long tot = 0, i = 1;
	while (tot <= n){
		tot+= i;
		i++;
	}
	return i-2;
}
