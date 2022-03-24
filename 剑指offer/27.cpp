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
TreeNode* mirrorTree(TreeNode* root);
int main(){

	return 0;
}
TreeNode* mirrorTree(TreeNode* root){
	if (!root)	return nullptr;
	TreeNode* p = root->left;
	root->left = mirrorTree(root->right);
	root->right = mirrorTree(p);
	return root;
}
