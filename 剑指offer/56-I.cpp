#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> singleNumbers(vector<int>& nums);
int main(){

	return 0;
}
vector<int> singleNumbers(vector<int>& nums){
	int flag = 1, m = 0;
	for (int& x : nums){
		m ^= x;
	}
	while ((flag & m) == 0)	flag <<= 1;
	int a = 0, b = 0;
	for (int& x : nums){
		if (x & flag)	a ^= x;
		else		b ^= x;
	}
	return {a, b};
}
