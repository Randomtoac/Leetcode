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
ListNode* middleNode(ListNode* head);
int main(){
	
	return 0;
}
ListNode* middleNode(ListNode* head) {
	bool nextflag = true;
	ListNode *p = head, *q = head;
	while(q->next){
        q = q->next;
        if (nextflag)	p = p->next;
        nextflag = !nextflag;
    }
	return p;
}
