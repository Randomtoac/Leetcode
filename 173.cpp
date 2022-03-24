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
class BSTIterator {
	vector<int> io;
	int n, it;
	void inorder(TreeNode* root){
		if (root->left)	inorder(root->left);
		io.push_back(root->val);
		if (root->right)	inorder(root->right);
	}
public:
    BSTIterator(TreeNode* root) {
    	io.push_back(-1);
		inorder(root);
		n = io.size();
		it = 0;
    }
    
    int next() {
		return io[++it];
    }
    
    bool hasNext() {
		return it < n-1;
    }
};
