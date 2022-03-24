#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool isSymmetric(TreeNode* root);
bool lrequal(TreeNode* l, TreeNode* r);
int main(){
	
	return 0;
}
bool lrequal(TreeNode* l, TreeNode* r){
	if ((l&&!r) || (r&&!l))	return false; 
	if (!l && !r)	return true;
	if (l->val != r->val)	return false;
	return (lrequal(l->right, r->left) && lrequal(l->left, r->right));
}
bool isSymmetric(TreeNode* root){
	if (!root)	return true;
	return lrequal(root->left, root->right);
}
