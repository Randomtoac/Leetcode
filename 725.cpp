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
vector<ListNode*> splitListToParts(ListNode* head, int k);
int main(){

	return 0;
}
vector<ListNode*> splitListToParts(ListNode* head, int k){
	ListNode* p = head;
	int n = 0;
	while(p){
		n++;
		p = p->next;
	}
	vector<ListNode*> ret(k, nullptr);
	int numcnt = n / k, remain = n % k, cnt = 0;
	p = head;
	for (int i = 0; i < k && p; i++){
		ret[i] = p;
		for (int j = 0; j < numcnt + (i < remain ? 1 : 0) - 1; j++){
			p = p->next;
		}
		ListNode* tail = p;
		p = p->next;
		tail->next = nullptr;
	}
	return ret;
}
