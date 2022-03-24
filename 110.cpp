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
    bool isBalanced(TreeNode* root) {
		return getheight(root) >= 0;
    }
    int getheight(TreeNode* root){
    	if (!root)	return 0;
    	int left = getheight(root->left);
    	int right = getheight(root->right);
    	if (left < 0 || right < 0 || abs(left-right) > 1)	return -1;
    	return max(left, right) + 1;
	}
};
