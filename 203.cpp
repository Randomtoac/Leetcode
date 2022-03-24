#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* removeElements(ListNode* head, int val);
int main(){

	return 0;
}
ListNode* removeElements(ListNode* head, int val) {
    ListNode *nhead = new ListNode(-1, head);
    ListNode *p = nhead, *q;
    while(p && p->next){
        q = p->next;
        while (q->val == val){
            if (q->next)	q = q->next;
            else{
                q = nullptr;
                break;
            }	
        }
        p->next = q;
        p = p->next;
    }
    p = nhead->next;
    delete nhead;
    return p;
}
