#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> levelOrder(TreeNode* root);
int main(){

	return 0;
}
vector<int> levelOrder(TreeNode* root){
	vector<int> ret;
	queue<TreeNode*> qu;
	qu.push(root);
	while (!qu.empty()){
		TreeNode* p = qu.front();
		qu.pop();
		if (!p)	continue;
		ret.push_back(p->val);
		qu.push(p->left);
		qu.push(p->right);
	}
	return ret;
}
