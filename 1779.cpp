#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
		int minn = INT_MAX;
		for (auto& v : points){
			if (v[0] == x)	minn = min(minn, abs(y-v[1]));
			else if (v[1] == y)	minn = min(minn, abs(x-v[0]));
		}
		for (int i = 0; i < points.size(); i++){
			if (points[i][0] == x && abs(points[i][1] - y) == minn)	return i;
			if (points[i][1] == y && abs(points[i][0] - x) == minn)	return i;
		}
		return -1;
    }
};
