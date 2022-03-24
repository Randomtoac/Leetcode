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
ListNode* reverseList(ListNode* head);
int main(){

	return 0;
}
ListNode* reverseList(ListNode* head){
	vector<int> nodes;
	ListNode* p = head;
	while (p){
		nodes.push_back(p->val);
		p = p->next;
	}
	p = head;
	for (int i = nodes.size()-1; i >= 0; i--){
		p->val = nodes[i];
		p = p->next;
	}
	return head;
}
