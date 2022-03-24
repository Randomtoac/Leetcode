#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findPoisonedDuration(vector<int>& timeSeries, int duration);
int main(){

	return 0;
}
int findPoisonedDuration(vector<int>& timeSeries, int duration){
	int n = timeSeries.size();
	timeSeries.push_back(0x3f3f3f3f);
	int ret = 0;
	for (int i = 0; i < n; i++){
		if (timeSeries[i+1] - timeSeries[i] < duration){
			ret += timeSeries[i+1] - timeSeries[i];
		}
		else	ret += duration;
	}
	return ret;
}
