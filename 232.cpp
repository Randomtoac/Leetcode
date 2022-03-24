#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
		int s[105], t[105], st = 0, tt = 0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
		while (st > 0){
			t[tt++] = s[--st];
		}
		t[tt++] = x;
		while (tt > 0){
			s[st++] = t[--tt];
		}
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
		return s[--st];
    }
    
    /** Get the front element. */
    int peek() {
		return s[st-1];
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
		return st == 0;
    }
};
