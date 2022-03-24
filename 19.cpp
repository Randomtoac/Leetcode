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
ListNode* removeNthFromEnd(ListNode* head, int n);
int main(){
	
	return 0;
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode *blank = new ListNode(0, head);
	ListNode *p = blank, *q = head;
	while (n--){
		q = q->next;
	}
	while(q){
		q = q->next;
        p = p->next;
    }
    p->next = p->next->next;
    ListNode *ret = blank->next;
    delete blank;
	return ret;
}
