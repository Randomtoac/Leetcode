#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue> 
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
		queue<TreeNode*> q;
		vector<vector<int>> ret;
		if (!root)	return ret;
		vector<int> last;
		q.push(root);
		while (!q.empty()){
			int n = q.size();
			last.clear();
			for (int i = 0; i < n; i++){
				TreeNode* cur = q.front();
				q.pop();
				last.push_back(cur->val);
				if (cur->left)	q.push(cur->left);
				if (cur->right)	q.push(cur->right);
			}
			ret.push_back(last);
		}
		return vector<vector<int>>(ret.rbegin(), ret.rend());
    }
};
