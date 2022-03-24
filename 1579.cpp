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

class UnionFind{
private:
	vector<int> f;
public:
	UnionFind(int n){
		f.resize(n);
		for (int& x : f)	x = -1;
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
			f[root1] += f[root2];
			f[root2] = root1;
		}
		else{
			f[root2] += f[root1];
			f[root1] = root2;
		}
	}
	int getRootCnt(int x){
		return -f[Find(x)];
	}
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
		UnionFind a(n+1);
		UnionFind b(n+1);
		int ret = 0;
		for (auto& v : edges){
			if (v[0] == 3){
				bool flag = false;
				int root1 = a.Find(v[1]), root2 = a.Find(v[2]);
				if (root1 != root2)	a.Union(root1, root2);
				else	flag = true;
				root1 = b.Find(v[1]), root2 = b.Find(v[2]);
				if (root1 != root2)	b.Union(root1, root2);
				else if (flag)	ret++;
			}
		}
		for (auto& v : edges){
			if (v[0] == 1){
				int root1 = a.Find(v[1]), root2 = a.Find(v[2]);
				if (root1 != root2)	a.Union(root1, root2);
				else	ret++;
			}
			else if (v[0] == 2){
				int root1 = b.Find(v[1]), root2 = b.Find(v[2]);
				if (root1 != root2)	b.Union(root1, root2);
				else	ret++;
			}
		}
		return a.getRootCnt(1) == n && b.getRootCnt(1) == n ? ret : -1;
    }
};
