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
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
Node* copyRandomList(Node* head);
int main(){

	return 0;
}
Node* copyRandomList(Node* head){
	if (!head)	return nullptr;
	for (Node* p = head; p; p = p->next->next){
		Node* copyNode = new Node(p->val);
		copyNode->random = p->random;
		copyNode->next = p->next;
		p->next = copyNode;
	}
	for (Node* p = head; p; p = p->next->next){
		if (p->random){
			p->next->random = p->random->next;
		}
	}
	Node* newHead = head->next;
	for (Node* p = head; p && p->next;){
		Node* t = p->next;
		p->next = t->next;
		p = t;
	}
	return newHead;
}
