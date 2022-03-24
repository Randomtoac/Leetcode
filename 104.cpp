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
int maxDepth(TreeNode* root);
void preorder(TreeNode* root, int d, int& maxd);
int main(){
	
	return 0;
}
void preorder(TreeNode* root, int d, int& maxd){
	if (!root)	return;
	d++;
	maxd = max(maxd, d);
	preorder(root->left, d, maxd);
	preorder(root->right, d, maxd);
}
	
int maxDepth(TreeNode* root) {
	int d = 0, maxd = 0;
	preorder(root, d, maxd);
	return maxd;
}
