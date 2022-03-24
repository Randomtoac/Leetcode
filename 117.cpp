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
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
Node* connect(Node* root);
int main(){

	return 0;
}
Node* connect(Node* root){
    if (!root)	return nullptr;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
        int cnt = q.size();
        Node* last = nullptr;
        for (int i = 0; i < cnt; i++){
            Node* n = q.front();
            q.pop();
            if (i != 0)	last->next = n;
            if (n->left)    q.push(n->left);
            if (n->right)    q.push(n->right);
            last = n;
        }
    }
    return root;
}

