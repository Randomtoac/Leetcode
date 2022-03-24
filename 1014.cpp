#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int maxScoreSightseeingPair(vector<int>& values);
int main(){
	vector<int> values = {1,2};
	cout << maxScoreSightseeingPair(values) <<	 endl;
	return 0;
}
int maxScoreSightseeingPair(vector<int>& values) {
	int maxi = values[0]+0, ret = -1;
	for (int i = 1; i < values.size(); i++){
		ret = max(ret, maxi + values[i] - i);
		maxi = max(maxi, values[i] + i); 
	}
	return ret;
}
