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
int kthLargest(TreeNode* root, int k);
void postorder(TreeNode* root, int& k, int& ret, bool& done);
int main(){

	return 0;
}
int kthLargest(TreeNode* root, int k){
	int ret = -1;
	bool done = false;
	postorder(root, k, ret, done);
	return ret;
}
void postorder(TreeNode* root, int& k, int& ret, bool& done){
	if (done)	return;
	if (!root)	return;
	postorder(root->right, k, ret, done);
	if (--k == 0){
		ret = root->val;
		done = true;
	}
	postorder(root->left, k, ret, done);
}
