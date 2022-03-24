#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool stoneGameIX(vector<int>& stones);
int main(){

	return 0;
}
bool stoneGameIX(vector<int>& stones){
	vector<int> cnt(3, 0);
	for (int& value : stones){
		cnt[value%3]++;
	}
	if (cnt[0]&1)	return cnt[1] - cnt[2] > 2 || cnt[2] - cnt[1] > 2;
	else	return cnt[1] && cnt[2];
}
