#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void printt(TreeNode* root){
	if (!root){
		cout << "null,";
		return;
	}
	cout << root->val << ",";
	printt(root->left);
	printt(root->right);
} 

void preOrder(TreeNode* root, vector<TreeNode*>& v){
	if (!root)	return;
	preOrder(root->left, v);
	v.push_back(root);
	preOrder(root->right, v);
} 

TreeNode* increasingBST(TreeNode* root) {
	if (!root)	return root;
	vector<TreeNode*> v;
	preOrder(root, v);
	root = v[0];
	TreeNode* p = root;
	for (int i = 1; i < v.size(); i++){
		p->left = nullptr;
		p->right = v[i];
		p = p->right;
	}
	p->left = nullptr;
	p->right = nullptr;
	return root;
}

int main(){
	TreeNode a(1), b(7), c(5, &a, &b);
	TreeNode* root = increasingBST(&c);
	printt(root);
	
	return 0;
}

