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
ListNode* deleteDuplicates(ListNode* head) {
	ListNode *nh = new ListNode(-200, head), *p = nh;
	while(p && p->next){
		int last = p->val;
		ListNode *q = p->next;
		while (q && q->val == last){
			q = q->next;
		}	
		p->next = q;
		p = q;
	}
	p = nh->next;
	delete nh;
	return p;
}
