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
ListNode* getKthFromEnd(ListNode* head, int k);
int main(){

	return 0;
}
ListNode* getKthFromEnd(ListNode* head, int k){
	ListNode* fast = head, *slow = head;
	while (k--){
		fast = fast->next;
	}
	while (fast){
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}
