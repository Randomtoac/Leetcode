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
TreeNode* invertTree(TreeNode* root);
int main(){

	return 0;
}
TreeNode* invertTree(TreeNode* root){
	if (!root)	return nullptr;
	swap(root->left, root->right);
	invertTree(root->left);
	invertTree(root->right);
	return root;
}
