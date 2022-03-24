#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
class AllOne {
private:
	struct Node{
		int value;
		unordered_set<string> st;
		Node* pre = nullptr;
		Node* next = nullptr;
		Node(int _value) : value(_value) {}
		Node(int _value, string s) : value(_value){
			st.insert(s);
		}
		Node(int _value, string s, Node* p, Node* n) : value(_value), pre(p), next(n){
			st.insert(s);
		}
	};
	Node* head;
	unordered_map<string, Node*> mp;
public:
    AllOne() {
		head = new Node(0);
		head->pre = head;
		head->next = head;
    }
    
    void inc(string key) {
		if (mp.count(key)){
			Node* cur = mp[key], *curnext = cur->next;
			cur->st.erase(key);
			int valuenow = cur->value + 1;
			if (cur->st.empty()){
				cur->pre->next = curnext;
				curnext->pre = cur->pre;
				delete cur;
				cur = curnext->pre;
			}
			if (curnext == head || curnext->value > valuenow){
				Node* newNode = new Node(valuenow, key, cur, curnext);
                newNode->pre->next = newNode;
				newNode->next->pre = newNode;
				mp[key] = newNode;
			}
			else{
				curnext->st.insert(key);
				mp[key] = curnext;
			}
		}
		else{
			if (head->next->value == 1){
				head->next->st.insert(key);
				mp[key] = head->next;
			}
			else{
				Node* newNode = new Node(1, key, head, head->next);
				newNode->pre->next = newNode;
				newNode->next->pre = newNode;
				mp[key] = newNode; 
			}
		}
//		cout << "Inc : " << key << endl;
//		printList();
    }
    
    void dec(string key) {
		Node* cur = mp[key], *curpre = cur->pre;
		cur->st.erase(key);
		int valuenow = cur->value - 1;
		if (cur->st.empty()){
			cur->next->pre = curpre;
			curpre->next = cur->next;
			delete cur;
			cur = curpre->next;
		}
		if (!valuenow){
			mp.erase(key);
			return;
		}
		if (curpre->value < valuenow){
			Node* newNode = new Node(valuenow, key, curpre, cur);
			newNode->pre->next = newNode;
			newNode->next->pre = newNode;
			mp[key] = newNode;
		}
		else{
			curpre->st.insert(key);
			mp[key] = curpre;
		}
//		cout << "Dec : " << key << endl;
//		printList();
    }
    
    string getMaxKey() {
//        cout << "Max : " << endl;
//		printList();
		return head->pre == head ? "" : *(head->pre->st.begin());
    }
    
    string getMinKey() {
//        cout << "Min : " << endl;
//		printList();
    	return head->next == head ? "" : *(head->next->st.begin());
    }

//    void printList() {
//    	Node* cur = head->next;
//    	while (cur != head){
//    		cout << cur->value << " ";
//            cur = cur->next;
//		}
//		cout << endl;
//	}
};
