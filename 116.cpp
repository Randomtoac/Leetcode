#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
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
Node* connect(Node* root) {
	if (!root)	return nullptr;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
    	int cnt = q.size();
    	for (int i = 0; i < cnt; i++){
    		Node* n = q.front();
	    	q.pop();
	    	if (i == cnt-1)	n.next = nullptr;
	    	else	n->next = q.front();
	    	if (n->left){
                q.push(n->left);
                q.push(n->right);
            }
		}
	}
	return root;
}
