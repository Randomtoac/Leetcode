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
vector<vector<int>> levelOrder(TreeNode* root);
int main(){

	return 0;
}
vector<vector<int>> levelOrder(TreeNode* root){
	vector<vector<int>> ret;
	if (!root)	return ret;
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()){
		vector<int> level;
		int n = q.size();
		while (n--){
			TreeNode* p = q.front();
			q.pop();
			if (!p)	continue;
			q.push(p->left);
			q.push(p->right);
			level.push_back(p->val);
		}
		if (level.size())	ret.push_back(level);
	}
	return ret;
}
