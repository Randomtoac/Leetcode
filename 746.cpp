#include <iostream>
#include <vector>
using namespace std;
int minCostClimbingStairs(vector<int>& cost);
int main(){
	vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
	cout << minCostClimbingStairs(cost) << endl;

	return 0;
}

int minCostClimbingStairs(vector<int>& cost) {
	cost.push_back(0);
	int l = cost.size();
	int mincost[l];
	mincost[0] = cost[0];
	mincost[1] = cost[1];
	for (int i = 2; i < l; i++){
		mincost[i] = mincost[i-1] <  mincost[i-2] ? mincost[i-1] : mincost[i-2];
		mincost[i] += cost[i];
	}
	return mincost[l-1];
}
