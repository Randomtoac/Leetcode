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
bool hasPathSum(TreeNode* root, int targetSum);
int main(){

	return 0;
}
bool hasPathSum(TreeNode* root, int targetSum){
	if (!root)	return false;
	if (!root->left && !root->right && root->val == targetSum)	return true;
	if (root->left)	root->left->val += root->val;
	if (root->right)	root->right->val += root->val;
	return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}
