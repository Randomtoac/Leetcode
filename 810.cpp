#include <iostream>
#include <vector>
using namespace std;

bool xorGame(vector<int>& nums) {
	int n = nums.size();
	if (!(n&1))	return true;
	int res = 0;
	for (int i : nums)	res ^= i;
	return res == 0;
}

int main(){
	vector<int> n = {0,1,2,3,4,5};
	cout << xorGame(n) << endl;

	return 0;
}

