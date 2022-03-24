#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> printNumbers(int n);
int main(){

	return 0;
}
vector<int> printNumbers(int n){
	vector<int> ret;
	const int maxx = pow(10, n);
	for (int i = 1; i < maxx; i++)	ret.push_back(i);
	return ret;
}
