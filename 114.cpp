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
void flatten(TreeNode* root);
void preorder(TreeNode* p, vector<TreeNode*>& v);
int main(){

	return 0;
}
void flatten(TreeNode* root){
	if (!root)	return;
	vector<TreeNode*> v;
	preorder(root, v);
	for(int i = 0; i < v.size()-1; i++){
		v[i]->right = v[i+1];
		v[i]->left = nullptr;
	}
	root = v[0];
}
void preorder(TreeNode* p, vector<TreeNode*>& v){
	if (!p)	return;
	v.push_back(p);
	preorder(p->left, v);
	preorder(p->right, v);
}
