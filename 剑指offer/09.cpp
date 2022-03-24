#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

class CQueue {
private:
	stack<int> s, t;
public:
    CQueue() {}
    
    void appendTail(int value) {
		while (!s.empty()){
			t.push(s.top());
			s.pop();
		}
		s.push(value);
		while (!t.empty()){
			s.push(t.top());
			t.pop();
		}
    }
    
    int deleteHead() {
		if (s.empty())	return -1;
		int ret = s.top();
		s.pop();
		return ret;
    }
};
