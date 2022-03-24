#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target);
int main(){
	vector<int> numbers = {2,7,11,15};
	vector<int> res = twoSum(numbers, 9);
	cout << res[0] << ", " << res[1] << endl;
	return 0;
}
vector<int> twoSum(vector<int>& numbers, int target) {
	int p = 0, q = numbers.size()-1;
	while(numbers[p] + numbers[q] != target){
		if (numbers[p] + numbers[q] > target)	q--;
		else	p++;
	}
	return {p+1, q+1};
}
