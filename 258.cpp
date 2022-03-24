#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int addDigits(int num);
int main(){

	return 0;
}
int addDigits(int num){
	if (!num)	return 0;
	return num % 9 ? num % 9 : 9;
}
