#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
int main(){

	return 0;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
	int m = 0, n = 0;
	ListNode *p = headA, *q = headB;
	while(p){
		m++;
		p = p->next;
	}	
	while(q){
		n++;
		q = q->next;
	}	
	if (m < n){
		swap(m, n);
		swap(headA, headB);
	}
	p = headA, q = headB;
	for (int i = 0; i < m-n; i++){
		if (!p)	return nullptr
		;
		p = p->next;
	}
	while(p && q){
		if (p == q)	return p;
		p = p->next;
		q = q->next;
	}
	return nullptr;
}
