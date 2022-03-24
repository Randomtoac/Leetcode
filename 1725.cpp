#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countGoodRectangles(vector<vector<int>>& rectangles);
int main(){

	return 0;
}
int countGoodRectangles(vector<vector<int>>& rectangles){
	int maxx = 0, ret = 0;
	for (vector<int>& v : rectangles){
		int minn = min(v[0], v[1]);
		if (maxx == minn)	ret++;
		else if (maxx < minn){
			ret = 1;
			maxx = minn;
		}
	}
	return ret;
}
