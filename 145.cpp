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
vector<int> postorderTraversal(TreeNode* root);
void postorder(TreeNode* root, vector<int> &ret);
int main(){
	
	return 0;
}
void postorder(TreeNode* root, vector<int>& ret){
	if (!root)	return;
	postorder(root->left, ret);
	postorder(root->right, ret);
	ret.push_back(root->val);
}
	
vector<int> postorderTraversal(TreeNode* root) {
	vector<int> ret;
	postorder(root, ret);
	return ret;
}
