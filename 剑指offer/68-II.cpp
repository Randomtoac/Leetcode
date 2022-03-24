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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
int main(){

	return 0;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
	TreeNode* ret;
	bool t = inTree(root, p, q, ret);
	return ret;
}
bool inTree(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& ret){
	if (!root)	return false;
	bool inleft = inTree(root->left, p, q, ret);
	bool inright = inTree(root->right, p, q, ret);
	if ((inleft && inright) || ((inleft || inright) && (p->val == root->val || q->val == root->val))){
		ret = root;
	}
	return inleft || inright || p->val == root->val || q->val == root->val;
}
