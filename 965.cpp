#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
		unordered_set<int> v;
		preorder(root, v);
		return v.size() <= 1;
    }
    void preorder(TreeNode* root, unordered_set<int>& v){
    	if (!root || v.size() == 2)	return;
    	v.insert(root->val);
    	preorder(root->left, v);
    	preorder(root->right, v);
	}
};
