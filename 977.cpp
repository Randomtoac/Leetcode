#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> sortedSquares(vector<int>& nums);
int main(){
	vector<int> nums = {-4,-3,2,5,10};
	vector<int> result = sortedSquares(nums);
	for (int i = 0; i < result.size(); i++){
		cout << result[i] << " ";
	}

	return 0;
}
vector<int> sortedSquares(vector<int>& nums) {
	int n = nums.size();
	vector<int> ret(n);
	for (int i = 0, j = nums.size()-1; i <= j;){
		if (abs(nums[i])<abs(nums[j])){
			ret[--n] = nums[j]*nums[j];
			j--;
		} 
		else{
			ret[--n] = nums[i]*nums[i];
			i++;
		}
	}
	return ret;
}
