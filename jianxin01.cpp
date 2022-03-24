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

ListNode* deleteListNode(ListNode* head);

int main(){

	return 0;
}
ListNode* deleteListNode(ListNode* head){
	ListNode* p = head, *q = head;
	while (p && p->next){
		p->next = p->next->next;
		p = p->next;
	}
	return head;
}
