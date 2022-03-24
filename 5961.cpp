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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int pairSum(ListNode* head);
int main(){

	return 0;
}
int pairSum(ListNode* head){
	vector<int> sum;
	ListNode *p = head;
	while (p){
		sum.push_back(p->val);
		p = p->next;
	}
	int ret = 0;
	for (int i = 0; i < sum.size()/2; i++){
		sum[i] += sum[sum.size()-1-i];
		ret = max(sum[i], ret);
	}
	return ret;
}
