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
int findTilt(TreeNode* root);
void postorder(TreeNode* r, int& ret);
int main(){

	return 0;
}
int findTilt(TreeNode* root){
	int ret = 0;
	int sum = postorder(root, ret);
	return ret;
}
int postorder(TreeNode* r, int& ret){
	if (!r)	return 0;
	int suml = postorder(r->left, ret);
	int sumr = postorder(r->right, ret);
	ret += abs(suml-sumr);
	return suml + sumr + r->val;
}
