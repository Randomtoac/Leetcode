#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
vector<int> replaceNonCoprimes(vector<int>& nums);
int main(){

	return 0;
}
vector<int> replaceNonCoprimes(vector<int>& nums){
	vector<int> ret;
	stack<int> st;
	st.push(nums[0]);
	for (int i = 1; i < nums.size(); i++){
		int last = nums[i];
		while (!st.empty()){
			int g = gcd(st.top(), last);
			if (g > 1){
				last *= st.top() / g;
				st.pop();
			}
			else{
				break;
			}
		}
		st.push(last);
	}
	while (!st.empty()){
		ret.push_back(st.top());
		st.pop();
	}
	return vector<int>(ret.rbegin(), ret.rend());
}
int gcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
