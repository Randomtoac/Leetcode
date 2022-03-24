#include <iostream>
#include <vector>
#include <unordered_map>
#include <list> 
using namespace std;
class MyHashMap {
private:
	const int modify = 769;
	vector<list<pair<int, int>>> table;
	int hash(int k){
		return k % modify;
	}
public:
    /** Initialize your data structure here. */
    MyHashMap(): table(modify) {}
    
    /** value will always be non-negative. */
    void put(int key, int value) {
		int h = hash(key);
		for (auto it = table[h].begin(); it != table[h].end(); it++){
			if ((*it).first == key){
				(*it).second = value;
				return;
			}
		}
		table[h].push_back(make_pair(key, value));
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
		int h = hash(key);
		for (auto it = table[h].begin(); it != table[h].end(); it++){
			if ((*it).first == key)	return (*it).second;
		}
		return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
		int h = hash(key);
		for (auto it = table[h].begin(); it != table[h].end(); it++){
			if ((*it).first == key){
				table[h].erase(it);
				return;
			}
		}
    }
};
int main(){

	return 0;
}

