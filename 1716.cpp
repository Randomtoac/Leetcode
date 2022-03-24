#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int totalMoney(int n);
int main(){

	return 0;
}
int totalMoney(int n){
	int weeks = n/7;
	int days = n%7;
	int sum = 0;
	for (int i = 0; i < days; i++){
		sum += weeks + i + 1;
	}
	for (int i = 0; i < weeks; i++){
		sum += i * 7 + 28;
	}
	return sum;
}
