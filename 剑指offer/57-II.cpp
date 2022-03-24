#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> findContinuousSequence(int target);
int main(){

	return 0;
}
vector<vector<int>> findContinuousSequence(int target){
	vector<vector<int>> ret;
	vector<int> cur;
	int l = 1, r = 2;
	while (l < r){
		int sum = (l + r) * (r - l + 1) / 2;
		if (sum == target){
			cur.clear();
			for (int i = l; i <= r; i++)	cur.push_back(i);
			ret.push_back(cur);
			l++;
			r++; 
		}
		else if (sum < target)	r++;
		else	l++;
	}
	return ret;
}
