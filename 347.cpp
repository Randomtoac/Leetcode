#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k);
int main(){

	return 0;
}
vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> res;
    map<int, int> freq;
    using pii = std::pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    
    for (auto e : nums) ++freq[e];
    
    for (auto& pair : freq) {
        pq.emplace(pair.second, pair.first);
        if (pq.size() > k) pq.pop();
    }
    
    while (!pq.empty()) {
        res.emplace_back(pq.top().second);
        pq.pop();
    }
    
    return res;
}
