#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> getLeastNumbers(vector<int>& arr, int k);
int main(){

	return 0;
}
vector<int> getLeastNumbers(vector<int>& arr, int k){
	if (!k)	return {};
	priority_queue<int> pq;
	for (int i = 0; i < k; i++)	pq.push(arr[i]);
	for (int i = k; i < arr.size(); i++){
		if (arr[i] < pq.top()){
			pq.pop();
			pq.push(arr[i]);
		}
	}
	vector<int> ret;
	while (!pq.empty()){
		ret.push_back(pq.top());
		pq.pop();
	}
	return ret;
}
