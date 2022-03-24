#include <iostream>
#include <vector>
#include <unordered_map>
#include <list> 
using namespace std;
class MyHashSet {
private:
	const int modify = 769;
	vector<list<int>> table;
	int hash(int k){
		return k % modify;
	}
public:
    /** Initialize your data structure here. */
    MyHashSet(): table(modify) {}
    
    void add(int key) {
		int h = hash(key);
		for (auto it = table[h].begin(); it != table[h].end(); it++){
			if (*it == key)	return;
		}
		table[h].push_back(key);
    }
    
    void remove(int key) {
		int h = hash(key);
		for (auto it = table[h].begin(); it != table[h].end(); it++){
			if (*it == key){
				table[h].erase(it);
				return;
			}
		}
    }
    
    /** Returns true if this set contains the specified element */
    
    bool contains(int key) {
		int h = hash(key);
		for (auto it = table[h].begin(); it != table[h].end(); it++){
			if (*it == key)	return true;
		}
		return false;
    }
};
int main(){

	return 0;
}

