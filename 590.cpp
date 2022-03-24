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
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
	vector<int> ret;
    vector<int> postorder(Node* root) {
    	ret.clear();
        dfs(root);
        return ret;
    }
    void dfs(Node* root){
    	if (!root)	return;
    	for (Node*& x : root->children){
    		dfs(x);
		}
		ret.push_back(root->val);
	}
};
