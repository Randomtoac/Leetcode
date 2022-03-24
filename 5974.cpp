#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int numberOfWays(string corridor);
int main(){

	return 0;
}
int numberOfWays(string corridor){
	int total = 0;
	const int modulus = 1000000007;
	for (char& ch : corridor){
		if (ch == 'S')	total++;
	}
	if (total&1)	return 0;
	int currentsum = 0;
	long long ret = 1;
	int i = 0, j = 0;
	while (currentsum < total){
		j = i;
		for (i = j; i < corridor.length(); i++){
			if (corridor[i] == 'S')	break;
		}
		if (currentsum)	ret *= j - i;
		ret %= modulus;
		for (i = i + 1; i < corridor.length(); i++){
			if (corridor[i] == 'S')	break;
		}
		currentsum += 2;
	}
	int ret_int = ret%modulus;
	return ret_int;
}
