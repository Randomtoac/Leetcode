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
bool isBalanced(TreeNode* root);
int main(){

	return 0;
}
bool isBalanced(TreeNode* root){
	int level = 0;
	return helper(root, level);
}
bool helper(TreeNode* root, int& level){
	if (!root){
		level = 0;
		return true;
	}
	int leftlevel = level, rightlevel = level;
	bool left = helper(root->left, leftlevel);
	bool right = helper(root->right, rightlevel);
	level = max(leftlevel, rightlevel) + 1;
	return left && right && abs(leftlevel - rightlevel) <= 1;
}
