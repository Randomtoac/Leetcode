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
class LRUCache {
private:
	struct Node{
		int key;
		int value;
		Node* pre = nullptr;
		Node* next = nullptr;
		Node(int _key, int _value) : key(_key), value(_value) {}
	};
	int c, cmax;
	Node* head;
	unordered_map<int, Node*> mp;
public:
    LRUCache(int capacity) {
		c = 0;
		cmax = capacity;
		head = new Node(-1, 0);
		head->pre = head;
		head->next = head;
    }
    
    int get(int key) {
		if (mp.count(key)){
			Node* cur = mp[key];
			cur->pre->next = cur->next;
			cur->next->pre = cur->pre;
			head->next->pre = cur;
			cur->next = head->next;
			cur->pre = head;
			head->next = cur;
			return cur->value;
		}
		return -1;
    }
    
    void put(int key, int value) {
    	int getkey = get(key);
    	if (getkey != -1){
    		head->next->value = value;
    		return;
		}
		Node* cur = new Node(key, value);
		c++;
		head->next->pre = cur;
		cur->next = head->next;
		cur->pre = head;
		head->next = cur;
		mp.emplace(key, cur);
		if (c > cmax){
			c--;
			cur = head->pre;
			cur->pre->next = head;
			head->pre = cur->pre;
			mp.erase(cur->key);
			delete cur;
		}
    }
};
