#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
s};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
int main(){

	return 0;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
	TreeNode* cur = root;
	while(1){
		if (cur->val > p->val && cur->val > q->val)	cur = cur->left;
		else if (cur->val < p->val && cur->val < q->val)	cur = cur->right;
		else	break;
	}
	return cur;
}
