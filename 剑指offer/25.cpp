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
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
int main(){

	return 0;
}
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
	ListNode *nhead = new ListNode(-1), *p = nhead;
	while (l1 && l2){
		if (l1->val > l2->val){
			p->next = l2;
			l2 = l2->next;
		}
		else{
			p->next = l1;
			l1 = l1->next;
		}
		p = p->next;
	}
	p->next = l1 ? l1 : l2;
	return nhead->next;
}
