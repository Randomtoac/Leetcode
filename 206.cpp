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
ListNode* reverseList(ListNode* head);
int main(){

	return 0;
}
ListNode* reverseList(ListNode* head) {
	ListNode *t[5000], *p = head;
	if (!p)	return nullptr;
	int cnt = 0;
	while(p){
		t[cnt++] = p;
		p = p->next;
	}
	for (int i = cnt-1; i > 0; i--){
		t[i]->next = t[i-1];
	}
	t[0]->next = nullptr;
	return t[cnt-1];
}
