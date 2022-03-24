#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int rangeSumBST(TreeNode* root, int low, int high) {
	if (root == nullptr)	return 0;
	
	if (root->val > high)	return rangeSumBST(root->left, low, high);
	if (root->val < low)	return rangeSumBST(root->right, low, high);
	return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
}

int main(){
	TreeNode* q1 = new TreeNode(10);
	TreeNode* w1 = new TreeNode(5);
	TreeNode* w2 = new TreeNode(15);
	TreeNode* e1 = new TreeNode(3);
	TreeNode* e2 = new TreeNode(7);
	TreeNode* e4 = new TreeNode(18);
	q1->left = w1;
	q1->right = w2;
	w1->left = e1;
	w1->right = e2;
	w2->right = e4;
	
	int output = rangeSumBST(q1, 7, 15);
	cout << output << endl;

	return 0;
}

