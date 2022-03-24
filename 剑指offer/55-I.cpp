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
int maxDepth(TreeNode* root);
void preorder(TreeNode* root, int& ret, int level);
int main(){

	return 0;
}
int maxDepth(TreeNode* root){
	int ret = 0;
	preorder(root, ret, 0);
	return ret;
}
void preorder(TreeNode* root, int& ret, int level){
	if (!root)	return;
	level++;
	ret = level > ret ? level : ret;
	preorder(root->left, ret, level);
	preorder(root->right, ret, level);
}
