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
vector<int> preorderTraversal(TreeNode* root);
void preorder(TreeNode* root, vector<int> &ret);
int main(){
	
	return 0;
}
void preorder(TreeNode* root, vector<int>& ret){
	if (!root)	return;
	ret.push_back(root->val);
	preorder(root->left, ret);
	preorder(root->right, ret);
}
	
vector<int> preorderTraversal(TreeNode* root) {
	vector<int> ret;
	preorder(root, ret);
	return ret;
}
