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
int kthSmallest(TreeNode* root, int k);
int main(){

	return 0;
}
void inorder(TreeNode* root, int& k, int& ret){
	if (ret != -1)	return;
	if (root->left)	inorder(root->left, k, ret);
	k--;
	if (k == 0)	ret = root->val;
	if (root->right)	inorder(root->right, k, ret);
}
int kthSmallest(TreeNode* root, int k){
	int ret = -1;
	inorder(root, k, ret);
	return ret;
}
