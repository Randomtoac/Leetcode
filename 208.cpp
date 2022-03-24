#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
class Trie {
private:
	bool isEnd;
	vector<Trie*> next;
	Trie* searchString(string s){
		Trie* node = this;
		for (char& ch : s){
			if (!node)	return nullptr;
			node = node->next[ch - 'a'];
		}
		return node;
	}
public:
    Trie() {
		isEnd = false;
		next.resize(26, nullptr);
    }
    
    void insert(string word) {
		Trie* node = this;
		for (char& ch : word){
			if (!node->next[ch - 'a']){
				node->next[ch - 'a'] = new Trie();
			}
			node = node->next[ch - 'a'];
		}
		node->isEnd = true;
    }
    
    bool search(string word) {
		Trie* node = this->searchString(word);
		if (!node)	return false;
		return node->isEnd;
    }
    
    bool startsWith(string prefix) {
		return this->searchString(prefix) != nullptr;
    }
};
int main(){

	return 0;
}

