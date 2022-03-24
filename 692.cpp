#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> topKFrequent(vector<string>& words, int k) {
	unordered_map<string, int> m;
	for (string &w : words){
		m[w]++;
	}
	vector<string> res;
	for (auto& [w, k] : m){
		res.emplace_back(w);
	}
	sort(res.begin(), res.end(), [&](const string& a, const string& b)->bool{
		return m[a] == m[b] ? a < b : m[a] > m[b];
	});
	res.erase(res.begin()+k, res.end());
	return res;
}
int main(){
	vector<string> input = {"i", "love", "leetcode", "i", "love", "coding"};
	vector<string> output = topKFrequent(input, 4);
	for (int i = 0; i < 4; i++){
		cout << output[i] << endl;
	} 

	return 0;
}

