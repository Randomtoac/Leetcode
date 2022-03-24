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
vector<int> reversePrint(ListNode* head);
int main(){

	return 0;
}
vector<int> reversePrint(ListNode* head){
	vector<int> v;
	ListNode* p = head;
	while (p){
		v.push_back(p->val);
		p = p->next;
	}
	reverse(v.begin(), v.end());
	return v;
}
