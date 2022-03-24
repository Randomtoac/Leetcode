#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isStraight(vector<int>& nums);
int main(){

	return 0;
}
bool isStraight(vector<int>& nums){
	unordered_set<int> st;
	int mi = 14, ma = 0;
	for (int x : nums){
		if (!x)	continue;
		if (st.count(x))	return false;
		st.insert(x);
		mi = x < mi ? x : mi;
		ma = x > ma ? x : ma;
	}
	return mi == 14 || ma - mi < 5;
}
