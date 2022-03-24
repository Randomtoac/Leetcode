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
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
TreeNode* helper(vector<int>& po, vector<int>& io, unordered_map<int, int>& mp, int pl, int pr, int il, int ir);
int main(){

	return 0;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
	int n = inorder.size();
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++){
		mp[inorder[i]] = i;
	}
	return helper(preorder, inorder, mp, 0, n-1, 0, n-1);
}
TreeNode* helper(vector<int>& po, vector<int>& io, unordered_map<int, int>& mp, int pl, int pr, int il, int ir){
	if (pl > pr)	return nullptr;
	int proot = pl;
	TreeNode* root = new TreeNode(po[proot]);
	int iroot = mp[po[proot]];
	int size = iroot - il;
	root->left = helper(po, io, mp, pl+1, pl+size, il, iroot-1);
	root->right = helper(po, io, mp, pl+size+1, pr, iroot+1, ir);
	return root;
}
