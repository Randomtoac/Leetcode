#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
class MyStack {
private:
	queue<int> *p, *q;
public:
    MyStack() {
    	p = new queue<int>;
    	q = new queue<int>;
	}
    
    void push(int x) {
		p->push(x);
    }
    
    int pop() {
		while(!p->empty()){
			if (p->size() == 1){
				int ret = p->front();
				p->pop();
				swap(p, q);
				return ret;
			}
			q->push(p->front());
			p->pop();
		}	
		return -1;
    }
    
    int top() {
		while(!p->empty()){
			if (p->size() == 1){
				int ret = p->front();
				q->push(ret);
				p->pop();
				swap(p, q);
				return ret;
			}
			q->push(p->front());
			p->pop();
		}
		return -1;
    }
    
    bool empty() {
		return p->empty();
    }
};
int main(){

	return 0;
}

