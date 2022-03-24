#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<long long> sumOfThree(long long num);
int main(){

	return 0;
}
vector<long long> sumOfThree(long long num){
	vector<long long> ret;
	if (num % 3 == 0){
		long long t = num/3;
		ret.push_back(t-1);
		ret.push_back(t);
		ret.push_back(t+1);
	}
	return ret;
}
