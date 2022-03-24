#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
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
int main(){

	return 0;
}
class Solution {
private:
	vector<int> ret;
public:
    vector<int> preorder(Node* root) {
        ret.clear();
        preorder_void(root);
        return ret;
    }
    void preorder_void(Node* root){
    	if (!root)	return;
    	ret.push_back(root->val);
    	for (Node*& r : root->children){
    		preorder_void(r);
		}
	}
};

