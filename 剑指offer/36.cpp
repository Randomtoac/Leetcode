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
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
Node* treeToDoublyList(Node* root);
void inorder(Node* root, Node* pre, Node* head);
int main(){

	return 0;
}
Node* treeToDoublyList(Node* root) {
	if (!root)	return nullptr;
	Node* head = nullptr, *pre = nullptr;
	inorder(root, pre, head);
	head->left = pre;
	pre->right = head;
	return head;
}
void inorder(Node* root, Node*& pre, Node*& head){
	if (!root)	return;
	inorder(root->left, pre, head);
	if (!pre)	head = root;
	else	pre->right = root;
	root->left = pre;
	pre = root;
	inorder(root->right, pre, head);
}
