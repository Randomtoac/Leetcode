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
int minDepth(TreeNode* root);
void dfs(TreeNode* p, int h, int& ret);
int main(){

	return 0;
}
int minDepth(TreeNode* root){
	if (!root)	return 0;
	int ret = 100001, h = 1;
	dfs(root, h, ret);
	return ret;
}
void dfs(TreeNode* p, int h, int& ret){
	if (h > ret)	return;
	if (!p->left && !p->right){
		ret = h;
		return;
	}
	if (p->left)	dfs(p->left, h+1, ret);
	if (p->right)	dfs(p->right, h+1, ret);
}
