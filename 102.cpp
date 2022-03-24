#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
	while(!q.empty()){
		int qsize = q.size();
		vector<int> curlevel;
		for(int i = 0; i < qsize; i++){
			TreeNode* cur = q.front();
			q.pop();
			if (cur->left)	q.push(cur->left);
			if (cur->right)	q.push(cur->right);
			curlevel.push_back(cur->val);
		}
		ret.push_back(curlevel);
	}
	return ret;
}
