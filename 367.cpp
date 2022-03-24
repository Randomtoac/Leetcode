#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isPerfectSquare(int num);
int main(){

	return 0;
}
bool isPerfectSquare(int num){
	int i = 1;
	while (num){
		num -= 2*i - 1;
		i++;
	}
	return num == 0;
}
