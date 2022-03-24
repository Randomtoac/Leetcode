#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int makeConnected(int n, vector<vector<int>>& connections);
int main(){

	return 0;
}
class Unionfind{
	private:
		vector<int> f;
	public:
		Unionfind(int n){
			f.resize(n);
			for (int& root : f)	root = -1;
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
			if (f[root2] >= f[root1]){
				f[root1] += f[root2];
				f[root2] = root1;
			}
			else{
				f[root2] += f[root1];
				f[root1] = root2;
			}
		}
		int getCount(){
			int count = 0;
			for (int& root : f){
				if (root < 0)	count++;
			}
			return count;
		}
};
int makeConnected(int n, vector<vector<int>>& connections){
	int len = connections.size();
	if (len < n-1)	return -1;
	Unionfind u(n);
	for (auto& v : connections){
		int root1 = u.Find(v[0]);
		int root2 = u.Find(v[1]);
		u.Union(root1, root2);
	}
	return u.getCount()-1;
}
