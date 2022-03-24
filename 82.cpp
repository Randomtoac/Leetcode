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
ListNode* deleteDuplicates(ListNode* head);
int main(){

	return 0;
}
ListNode* deleteDuplicates(ListNode* head){
	ListNode* nhead = new ListNode(-102, head);
	ListNode* p = nhead;
	while(p->next && p->next->next){
		if (p->next->val == p->next->next->val){
			int x = p->next->val;
			while (p->next && p->next->val == x){
				p->next = p->next->next;
			}
		}
		else{
			p = p->next;
		}
	}
	head = nhead->next;
	delete nhead;
	return head;
}
