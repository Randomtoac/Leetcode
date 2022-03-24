#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
bool hasCycle(ListNode *head);
int main(){

	return 0;
}
bool hasCycle(ListNode *head) {
	ListNode *p = head, *q = head;
	while(q && q->next && q->next->next){
		p = p->next;
		q = q->next->next;
		if (p == q)	return true;
	}
	return false;
}
