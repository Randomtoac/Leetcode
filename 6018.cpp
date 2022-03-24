#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
TreeNode* createBinaryTree(vector<vector<int>>& descriptions);
int main(){

	return 0;
}
TreeNode* createBinaryTree(vector<vector<int>>& descriptions){
	unordered_map<int, TreeNode*> mp;
	unordered_set<int> st;
	for (auto& v : descriptions){
		if (!mp.count(v[0])){
			st.insert(v[0]);
			mp[v[0]] = new TreeNode(v[0]);
		}
		if (!mp.count(v[1])){
			mp[v[1]] = new TreeNode(v[1]);
		}
	}
	for (auto& v : descriptions){
		if (st.count(v[1]))	st.erase(v[1]);
		if (v[2] == 0){
			mp[v[0]]->right = mp[v[1]];
		}
		else if (v[2] == 1){
			mp[v[0]]->left = mp[v[1]];
		}
	}
	for (auto it = st.begin(); it != st.end(); it++){
		return mp[*it];
	}
	return nullptr;
}
