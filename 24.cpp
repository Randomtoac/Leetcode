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
ListNode* swapPairs(ListNode* head);
int main(){

	return 0;
}
ListNode* swapPairs(ListNode* head){
	ListNode* nhead = new ListNode(-1, head), *p = nhead, *q;
	while(p->next && p->next->next){
		q = p->next->next;
		p->next->next = q->next;
		q->next = p->next;
		p->next = q;
		p = p->next->next;
	}
	head = nhead->next;
	delete nhead;
	return head;
}
