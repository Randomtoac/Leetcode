#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isNStraightHand(vector<int>& hand, int groupSize);
int main(){

	return 0;
}
bool isNStraightHand(vector<int>& hand, int groupSize){
	if (!hand.size()%groupSize)	return false;
	unordered_map<int, int> m;
	int minnum = INT_MAX, n = hand.size()/groupSize;
	for (int& num : hand){
		minnum = min(minnum, num);
		m[num]++;
	}
	while (n--){
		while (!m[minnum])	minnum++;
		for (int i = 0; i < groupSize; i++){
			if (!m[minnum+i])	return false;
			m[minnum+i]--;
		}
	}
	return true;
}
