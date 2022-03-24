#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
class MedianFinder {
private:
	priority_queue<int, vector<int>, greater<int>> minHeap;
	priority_queue<int, vector<int>, less<int>> maxHeap;
	double median = 0.0;
public:
    /** initialize your data structure here. */
    MedianFinder() {
    }
    
    void addNum(int num) {
		if (minHeap.size() == maxHeap.size()){
			minHeap.push(num);
			maxHeap.push(minHeap.top());
			minHeap.pop();
			minHeap.push(maxHeap.top());
			maxHeap.pop();
			median = (double)minHeap.top();
		}
		else{
			minHeap.push(num);
			maxHeap.push(minHeap.top());
			minHeap.pop();
			median = 1.0*(maxHeap.top() + minHeap.top())/2;
		}
    }
    
    double findMedian() {
		return median;
    }
};
int main(){

	return 0;
}

