#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
long long smallestNumber(long long num);
int main(){

	return 0;
}
long long smallestNumber(long long num){
	if (num < 10 && num > -10)	return num;
	bool neg = num < 0;
	int dig[10] = {0};
	if (neg)	num = -num;
	int cnt = 0;
	while(num){
		dig[num%10]++;
		num /= 10;
		cnt++;
	}
	long long ret = 0;
	if (!neg){
		for (int i = 1; i < 10; i++){
			if (dig[i]){
				ret += i;
				cnt--;
				dig[i]--;
				break;
			}
		}
		for (int i = 0; i < 10; i++){
			while (dig[i]){
				ret *= 10;
				ret += i;
				cnt--;
				dig[i]--;
				if (!cnt)	return ret;
			}
		}
	}
	else{
		for (int i = 9; i >= 0; i--){
			while (dig[i]){
				ret *= 10;
				ret += i;
				cnt--;
				dig[i]--;
				if (!cnt)	return -ret;
			}
		}
	}
	return 0;
}
