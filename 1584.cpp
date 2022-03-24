#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minCostConnectPoints(vector<vector<int>>& points);
struct Road{
	int x, y;
	int dis;
};
bool cmp(Road a, Road b){
	return a.dis <= b.dis;
}
class UnionFind{
	private:
		vector<int> f;
	public:
		UnionFind(int n){
			f.resize(n);
			for (int& x : f){
				x = -1;
			}
		}
		int Find(int x){
			int root = x;
			while (f[root] >= 0)	root = f[root];
			while (x != root){
				int t = f[x];
				f[x] = root;
				x = t;
			}
			return root;
		}
		void Union(int root1, int root2){
			if (root1 == root2)	return;
			if (f[root1] <= f[root2]){
				root1 += root2;
				f[root2] = root1;
			}
			else{
				root2 += root1;
				f[root1] = root2;
			}
		}
};
int main(){

	return 0;
}
int minCostConnectPoints(vector<vector<int>>& points){
	if (points.size() == 1)	return 0;
	vector<Road> roads;
	for (int i = 0; i < points.size()-1; i++){
		for (int j = i+1; j < points.size(); j++){
			Road road;
			road.x = i;
			road.y = j;
			road.dis = abs(points[j][0]-points[i][0])+abs(points[j][1]-points[j][0]);
			roads.push_back(road);
		}
	}
	sort(roads.begin(), roads.end(), cmp);
	UnionFind uf(points.size());
	int ret = 0;
	unordered_set<int> visited;
	for (Road& r : roads){
		int root1 = uf.Find(r.x);
		int root2 = uf.Find(r.y);
		if (root1 != root2){
			ret += r.dis;
			visited.insert(root1);
			visited.insert(root2);
		}	
		uf.Union(root1, root2);
		if (visited.size() == points.size())	break;
	}
	return ret;
}
