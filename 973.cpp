#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>>& points, int k);
int main(){

	return 0;
}
static bool cmp(vector<int> a, vector<int> b){
	return a[0]*a[0]+a[1]*a[1] <= b[0]*b[0]+b[1]*b[1];
}
vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
	vector<vector<int>> ret;
	sort(points.begin(), points.end(), cmp);
	points.erase(points.begin()+k, points.end());
	return points;
}
