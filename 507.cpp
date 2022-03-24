#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool checkPerfectNumber(int num);
int main(){

	return 0;
}
bool checkPerfectNumber(int num){
	int sum = 0;
	double sq = sqrt(num);
	for (int i = 1; i < sq; i++){
		if (num % i == 0){
			sum += i;
			sum += num/i;
		}
	}
	if (int(sq) == sq)	sum += (int)sq;
	return sum == num*2;
}
