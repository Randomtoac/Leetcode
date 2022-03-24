#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<long long> maximumEvenSplit(long long finalSum);
int main(){

	return 0;
}
vector<long long> maximumEvenSplit(long long finalSum){
	vector<long long> ret; 
	if (finalSum % 2)	return ret;
	long long t = 2, u = finalSum;
	while (finalSum >= 2 * t + 2){
		ret.push_back(t);
		u -= t;
		t += 2;
	}
	ret.push_back(u);
	return ret;
}
