#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class MinStack {
	vector<int> stack;
	vector<int> minn;
public:
    MinStack() {
    	minn.push_back(0x7fffffff);
	}
    
    void push(int val) {
		stack.push_back(val);
		minn.push_back(min(minn.back(), val));
    }
    
    void pop() {
		stack.pop_back();
		minn.pop_back();
    }
    
    int top() {
		return stack.back();
    }
    
    int getMin() {
		return minn.back();
    }
};
