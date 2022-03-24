#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
struct TrieNode{
	TrieNode* next[26];
	int val;
	TrieNode(){
		for (int i = 0; i < 26; i++)	next[i] = nullptr;
		val = 0;
	}
};
class MapSum {
private:
	TrieNode* root;
	unordered_map<string, int> cnt;
public:
    MapSum() {
		this->root = new TrieNode();
    }
    
    void insert(string key, int val) {
		int temp = val;
		if (cnt.count(key))	temp -= cnt[key];
		cnt[key] = val;
		TrieNode* node = root;
		for (char& ch : key){
			if (node->next[ch-'a'] == nullptr){
				node->next[ch-'a'] = new TrieNode();
			}
			node = node->next[ch-'a'];
			node->val += temp;
		}
    }
    
    int sum(string prefix) {
		TrieNode* node = root;
		for (char& ch : prefix){
			if (node->next[ch-'a'] == nullptr)	return 0;
			node = node->next[ch-'a'];
		}
		return node->val;
    }
};
