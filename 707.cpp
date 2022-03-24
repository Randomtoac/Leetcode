#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class MyLinkedList {
	struct Node{
		int val;
		Node* next, *prev;
		Node(){val = -1; next = nullptr; prev = nullptr;}
		Node(int x, Node* p, Node* q){val = x; next = p; prev = q;}
	};
	int size;
	Node* head = nullptr, *tail = nullptr;
public:
    MyLinkedList() {
		head = new Node();
		tail = new Node();
		size = 0;
		tail->prev = head;
		head->next = tail;
    }
    
    int get(int index) {
    	cout << "Get: " << index << " ";
		if (index >= size || index < 0){
            cout << "out of size. " << endl;
            return -1;
        }	
		int cnt = 0;
		Node* p = head;
		while(p){
			p = p->next;
			if (cnt == index){
                cout << p->val << endl;
                return p->val;
            }	
			cnt++;
		}
		return -1;
    }
    
    void addAtHead(int val) {
    	cout << "Addathead: " << val << endl;
		Node* newnode = new Node(val, head->next, head);
		head->next->prev = newnode;
		head->next = newnode;
		size++;
		printList();
    }
    
    void addAtTail(int val) {
    	cout << "Addattail: " << val << endl;
		Node* newnode = new Node(val, tail, tail->prev);
		tail->prev->next = newnode;
		tail->prev = newnode;
		size++;
		printList();
    }
    
    void addAtIndex(int index, int val) {
    	cout << "Addatindex: " << index << ", val: " << val << endl;
    	if (index < 0)	index = 0;
    	if (index > size)	return;
		Node* newnode = new Node(val, nullptr, nullptr), *p = head;
		int cnt = 0;
		while(p){
			if (cnt == index){
				newnode->next = p->next;
				newnode->prev = p;
				p->next->prev = newnode;
				p->next = newnode;
				size++;
				printList();
				return;
			}
			p = p->next;
			cnt++;
		}
    }
    
    void deleteAtIndex(int index) {
    	cout << "Delete at index: " << index << endl;
		if (index >= size || index < 0)	return;
		int cnt = 0;
		Node* p = head;
		while(p){
			if (cnt == index){
				Node* q = p->next;
				q->next->prev = p;
				p->next = q->next;
				size--;
				delete q;
				printList();
				return;
			}
			p = p->next;
			cnt++;
		}
    }
    void printList(){
    	cout << "List: ";
    	Node* p = head;
    	while(p){
    		cout << p->val << " ";
    		p = p->next;
		}
		cout << endl;
	}
};

// 带头结点的单链表
 
class MyLinkedList {
	struct Node{
		int val;
		Node* next;
		Node(){val = -1; next = nullptr;}
		Node(int x, Node* p){val = x; next = p;}
	};
	int size;
	Node* head = nullptr, *tail = nullptr;
public:
    MyLinkedList() {
		head = new Node();
		size = 0;
		tail = head;
    }
    
    int get(int index) {
        cout << "Get: " << index << endl;
		if (index >= size || index < 0)	return -1;
		int cnt = 0;
		Node* p = head;
         cout << head->val << endl;
		while(p){
			p = p->next;
             cout << size << " " << index << " " << cnt << endl;
			if (cnt == index)	return p->val;
			cnt++;
		}
		return -1;
    }
    
    void addAtHead(int val) {
        cout << "Addathead: " << val << endl;
		Node* newnode = new Node(val, head->next);
		head->next = newnode;
		size++;
        if (tail->next)	tail = newnode;
        printList();
    }
    
    void addAtTail(int val) {
        cout << "Addattail: " << val << endl;
		Node* newnode = new Node(val, nullptr);
		tail->next = newnode;
		tail = newnode;
		size++;
        printList();
    }
    
    void addAtIndex(int index, int val) {
        cout << "Addatindex: " << index << ", val: " << val << endl;
    	if (index < 0)	index = 0;
    	if (index > size)	return;
		Node* newnode = new Node(val, nullptr);
        Node* p = head;
		int cnt = 0;
		while(p){
			if (cnt == index){
				newnode->next = p->next;
				p->next = newnode;
				size++;
                if (tail->next)	tail = newnode;
                 printList();
				return;
			}
			p = p->next;
			cnt++;
		}
    }
    
    void deleteAtIndex(int index) {
        cout << "Delete at index: " << index << endl;
		if (index >= size || index < 0)	return;
		int cnt = 0;
        Node* p = head;
		while(p){
			if (cnt == index){
                if (cnt == size-1)	tail = p;
				Node* q = p->next;
				p->next = q->next;
                q->next = nullptr;
				size--;
				delete q;
                printList();
				return;
			}
			p = p->next;
			cnt++;
		}
    }

     void printList(){
     	cout << "List: ";
        Node* p = head;
     	while(p){
     		cout << p->val << " ";
     		p = p->next;
	 	}
	 	cout << endl;
	 }
};
