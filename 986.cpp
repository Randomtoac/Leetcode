#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList);
int main(){

	return 0;
}
vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList){
	vector<vector<int>> ret;
	if (!firstList.size() || !secondList.size())	return ret;
	int i = 0, j = 0;
	while(i < firstList.size() && j < secondList.size()){
		int a = firstList[i][0], b = firstList[i][1];
		int x = secondList[j][0], y = secondList[j][1];
		if (a > y)	j++;
		else if (x > b)	i++;
		else{
			ret.push_back({max(a, x), min(b, y)});
			if (b > y)	j++;
			else	i++;
		}
	}
	return ret;
}
