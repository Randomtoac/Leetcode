#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums);
int main(){

	return 0;
}
vector<int> productExceptSelf(vector<int>& nums){
	int n = nums.size();
	vector<int> premul(n, 1), postmul(n, 1);
	for (int i = 0; i < n; i++){
		if (i != 0){
			premul[i] = premul[i-1] * nums[i-1];
			postmul[n-1-i] = postmul[n-i] * nums[n-i];
		}
	}
	vector<int> ret(n, 0);
	for (int i = 0; i < n; i++){
		ret[i] = premul[i] * postmul[i];
	}
	return ret;
}
