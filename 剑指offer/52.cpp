#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
int main(){

	return 0;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
	int lenA = 0, lenB = 0;
	ListNode* p = headA, *q = headB;
	while (p){
		lenA++;
		p = p->next;
	}	
	while (q){
		lenB++;
		q = q->next;
	}	
	p = headA, q = headB;
	if (lenA > lenB){
		for (int i = 0; i < lenA - lenB; i++){
			p = p->next;
		}
	}
	else{
		for (int i = 0; i < lenB - lenA; i++){
			q = q->next;
		}
	}
	while (p && q){
		if (p == q)	return p;
		p = p->next;
		q = q->next; 
	}
	return nullptr;
}
