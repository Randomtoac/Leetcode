#include <iostream>
#include <vector> 
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int hx, hy, hc = 1;
TreeNode* fx, *fy;

void findxy(TreeNode* root, int x, int y){
	if (!root){
		hc--;
		return;
	}
	hc++;
	if ((root->left && root->left->val == x) || (root->right && root->right->val == x)){
		fx = root;
		hx = hc;
	}
	if ((root->left && root->left->val == y) || (root->right && root->right->val == y)){
		fy = root;
		hy = hc;
	}
	findxy(root->left, x, y);
	hc++;
	findxy(root->right, x, y);
	hc--;
}

bool isCousins(TreeNode* root, int x, int y) {
	findxy(root, x, y);
	if (hx == hy && fx != fy)	return true;
	return false;
}

int main(){
	int x = 5, y = 4;
	TreeNode q1(1), w1(2), w2(3), e1(4), e2(5);
	q1.left = &w1;
	q1.right = &w2;
	w1.right = &e1;
	w2.right = &e2;
	bool out = isCousins(&q1, x, y);
	cout << out << endl;

	return 0;
}

