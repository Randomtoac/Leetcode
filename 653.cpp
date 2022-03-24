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
bool findTarget(TreeNode* root, int k);
void inorder(TreeNode* root, vector<int>& nums);
int main(){

	return 0;
}
void inorder(TreeNode* root, vector<int>& nums){
	if (!root)	return;
	inorder(root->left, nums);
	nums.push_back(root->val);
	inorder(root->right, nums);
}
bool findTarget(TreeNode* root, int k){
	vector<int> nums;
	inorder(root, nums);
	int p = 0, q = nums.size()-1;
	while(p < q){
		if (nums[p] + nums[q] == k)	return true;
		if (nums[p] + nums[q] < k)	p++;
		else q--;
	}
	return false;
}
