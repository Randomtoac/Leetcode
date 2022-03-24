#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int singleNumber(vector<int>& nums);
int main(){

	return 0;
}
int singleNumber(vector<int>& nums){
	int one = 0, two = 0;
	for (int& num : nums){
		one = one ^ num & ~two;
		two = two ^ num & ~two;
	}
	return one;
}
