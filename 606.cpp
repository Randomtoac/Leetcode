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
    string tree2str(TreeNode* root) {
		string ret;
		preorder(root, ret);
		return ret.substr(1, ret.length()-2);
    }
    void preorder(TreeNode* root, string& ret){
    	ret.push_back('(');
    	ret.append(to_string(root->val));
    	if (root->left)	preorder(root->left, ret);
    	else if (root->right)	ret.append("()");
		if (root->right)	preorder(root->right, ret);
		ret.push_back(')');
	}
};
