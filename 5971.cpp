#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minimumCost(vector<int>& cost);
int main(){

	return 0;
}
int minimumCost(vector<int>& cost){
	int cnt = 0, ret = 0;
	sort(cost.begin(), cost.end());
	for (int i = cost.size()-1; i >= 0; i--){
		cnt++;
		if (cnt == 3){
			cnt = 0;
			continue;
		}
		ret += cost[i]; 
	}
	return ret;
}
