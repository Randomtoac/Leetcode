#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool isValidBST(TreeNode* root);
bool isValidBSTwithRange(TreeNode* root, long long mn, long long mx);
int main(){

	return 0;
}
bool isValidBSTwithRange(TreeNode* root, long long mn, long long mx){
	if (!root)	return true;
	if (root->val <= mn || root->val >= mx)	return false;
	return isValidBSTwithRange(root->left, mn, root->val) && isValidBSTwithRange(root->right, root->val, mx);
}
bool isValidBST(TreeNode* root){
	return isValidBSTwithRange(root, LLONG_MIN, LLONG_MAX);
}
