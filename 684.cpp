#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> findRedundantConnection(vector<vector<int>>& edges);
int main(){

	return 0;
}
class Unionfind{
	private:
		vector<int> s;
	public:
		Unionfind(int n){
			s.resize(n+1);
			for (int& root : s)	root = -1;
		}
		int Find(int x){
			int root = x;
			while (s[root] >= 0)	root = s[root];
			while (x != root){
				int t = s[x];
				s[x] = root;
				x = t;
			}
			return root;
		}
		void Union(int root1, int root2){
			if (root1 == root2)	return;
			if (s[root2] > s[root1]){
				s[root1] += s[root2];
				s[root2] = root1;
			}
			else{
				s[root2] += s[root1];
				s[root1] = root2;
			}
		}
		void PrintS(){
			for (int& root : s)	cout << root << " ";
			cout << endl;
		}
};
vector<int> findRedundantConnection(vector<vector<int>>& edges){
	Unionfind u(edges.size()+1);
	for (vector<int>& v : edges){
		int root1 = u.Find(v[0]);
		int root2 = u.Find(v[1]);
		if (root1 == root2)	return v;
		u.Union(root1, root2);
	}
	return {-1, -1};
}
