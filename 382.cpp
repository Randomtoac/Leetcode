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

class Solution {
private:
	vector<int> nums; 
public:
    Solution(ListNode* head) {
    	ListNode* p = head;
		while (p){
			nums.push_back(p->val);
			p = p->next;
		}
    }
    
    int getRandom() {
		int n = nums.size();
		return nums[rand()%n];
    }
};
