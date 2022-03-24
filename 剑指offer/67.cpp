#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int strToInt(string str);
int main(){

	return 0;
}
int strToInt(string str){
	int ret = 0;
	const int bound = INT_MAX / 10;
	bool dig = false, neg = false;
	for (char& ch : str){
		if (dig && !isdigit(ch))	return neg ? -ret : ret;
		if (ch == ' ')	continue;
		if (!dig){
			if (ch == '+' || ch == '-' || isdigit(ch))	dig = true;
			else return 0;
		}
		if (ch == '+')	continue;
		if (ch == '-'){
			neg = true;
			continue;
		}	
		int cur = ch - '0';
		if (ret > bound || (ret == bound && cur > 7)){
			if (neg)	return INT_MIN;
			else	return INT_MAX;
		}
		ret = ret*10 + cur;
	}
	return neg ? -ret : ret;
}
