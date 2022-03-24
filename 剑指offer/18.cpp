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
ListNode* deleteNode(ListNode* head, int val);
int main(){

	return 0;
}
ListNode* deleteNode(ListNode* head, int val){
	ListNode* p = head;
	if (head->val == val)	return head->next;
	while (p->next->val != val){
		p = p->next;
	}
	p->next = p->next->next;
	return head;
}
