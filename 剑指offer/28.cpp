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
bool isSymmetric(TreeNode* root);
int main(){

	return 0;
}
bool isSymmetric(TreeNode* root){
	if (!root)	return true;
	return helper(root->left, root->right);
}
bool helper(TreeNode* p, TreeNode* q){
	if (!p && !q)	return true;
	if (!p || !q)	return false;
	return (p->val == q->val) && helper(p->right, q->left) && helper(p->left, q->right);
}
