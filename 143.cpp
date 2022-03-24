#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void reorderList(ListNode* head);
ListNode* reverseList(ListNode* head);
int main(){

	return 0;
}
void reorderList(ListNode* head){
	if (!head || !head->next || !head->next->next)	return;
	ListNode *p = head, *q = head, *r;
	while(q->next && q->next->next){
		p = p->next;
		q = q->next->next;
	}
	q = reverseList(p->next);
    p->next = nullptr;
    p = head;
	while(p && q){
		r = q->next;
        q->next = p->next;
        p->next = q;
        p = p->next->next;
	    q = r;
	}
}
ListNode* reverseList(ListNode* head){
	ListNode *newhead = nullptr, *p = head, *q;
	while(p){
		q = p->next;
		p->next = newhead;
		newhead = p;
		p = q;
	}
	return newhead;
}
