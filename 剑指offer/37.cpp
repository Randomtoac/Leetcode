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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Codec {
private:
	void preorder_se(string& ret, TreeNode* root){
		if (!root){
			ret.append("None,");
			return;
		}	
		ret.append(to_string(root->val));
		ret.push_back(',');
		preorder_se(ret, root->left);
		preorder_se(ret, root->right);
	}
	TreeNode* preorder_de(const vector<string>& vals, TreeNode* root, int& k){
		if (vals[k] == "None"){
			k++;
			return nullptr;
		}	
		root = new TreeNode(stoi(vals[k]));
		k++;
		root->left = preorder_de(vals, root->left, k);
		root->right = preorder_de(vals, root->right, k);
		return root;
	}
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ret;
        preorder_se(ret, root);
        return ret;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> vals;
        int start = 0, k = 0;
        for (int i = 0; i < data.size(); i++){
        	if (data[i] == ','){
        		vals.push_back(data.substr(start, i-start));
        		start = i + 1;
			}
		}
		TreeNode* root;
		return preorder_de(vals, root, k);
    }
};
int main(){

	return 0;
}

