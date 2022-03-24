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
vector<vector<int>> pathSum(TreeNode* root, int target);
void dfs(vector<vector<int>>& ret, vector<int> cur, TreeNode* root, int target);
int main(){

	return 0;
}
vector<vector<int>> pathSum(TreeNode* root, int target){
	vector<vector<int>> ret;
	vector<int> cur;
	dfs(ret, cur, root, target);
	return ret;
}
void dfs(vector<vector<int>>& ret, vector<int> cur, TreeNode* root, int target){
	if (!root)	return;
	cur.push_back(root->val);
	if (!root->left && !root->right && target == root->val)	ret.push_back(cur);
	dfs(ret, cur, root->left, target-root->val);
	dfs(ret, cur, root->right, target-root->val);
}
