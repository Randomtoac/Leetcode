#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
int main(){

	return 0;
}
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode *p = l1, *q = l2;
	ListNode *head = new ListNode(0), *tail = head;
	while(p && q){
		if (p->val < q->val){
			tail->next = p;
			tail = p;
			p = p->next;
		}
		else{
			tail->next = q;
			tail = q;
			q = q->next;
		}
	}
	if(p)	tail->next = p;
	if(q)	tail->next = q;
	p = head->next;
	delete head;
	return p;
}
