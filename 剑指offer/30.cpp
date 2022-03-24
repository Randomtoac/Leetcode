#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

class MinStack {
private:
	vector<int> stack;
	vector<int> vmin;
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) {
		stack.push_back(x);
		int minn = vmin.empty() ? x : std::min(x, vmin.back());
		vmin.push_back(minn);
    }
    
    void pop() {
		stack.pop_back();
		vmin.pop_back();
    }
    
    int top() {
		return stack.back();
    }
    
    int min() {
		return vmin.back();
    }
};
