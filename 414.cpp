#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;
int thirdMax(vector<int>& nums);
int main(){

	return 0;
}
int thirdMax(vector<int>& nums){
	set<int> st;
	for (int i = 0; i < nums.size(); i++){
		st.insert(nums[i]);
		if (st.size() > 3)	st.erase(st.begin());
	}
	if (st.size() == 3)	return *st.begin();
	return *st.rbegin();
}

