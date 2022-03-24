#include <iostream>
#include <vector> 
using namespace std;

int totalHammingDistance(vector<int>& nums) {
	int res = 0;
	for (int i = 0; i < 32; i++){
		int cnt1 = 0;
		for (int num : nums){
			cnt1 += (num >> i) & 1;
		}
		res += cnt1 * (nums.size()-cnt1);
	}
	return res;
}

int main(){
	vector<int> n = {4,14,2};
	cout << totalHammingDistance(n) << endl;

	return 0;
}

