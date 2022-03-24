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
bool isSubtree(TreeNode* root, TreeNode* subRoot);
bool isSametree(TreeNode* root, TreeNode* subRoot);
int main(){

	return 0;
}
bool isSubtree(TreeNode* root, TreeNode* subRoot){
	if (!root && !subRoot)	return true;
	if (!root && subRoot)	return false;
	return isSametree(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}
bool isSametree(TreeNode* root, TreeNode* subRoot){
	if (!root && !subRoot)	return true;
	return root && subRoot && root->val == subRoot->val && isSametree(root->left, subRoot->left) && isSametree(root->right, subRoot->right);
}
