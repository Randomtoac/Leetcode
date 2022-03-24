#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

	return 0;
}
class Solution {
private:
	vector<set<pair<int, int>>> table = vector<set<pair<int, int>>>(26, set<pair<int, int>>());
    multiset<int> mset;
    set<pair<int, int>>::iterator add(int c, int l, int r){
    	mset.insert(r-l);
    	return table[c].insert(pair<int, int>(l, r)).first;
	}
	void del(int c, int l, int r){
		mset.erase(mset.find(r-l));
		table[c].erase(table[c].find(pair<int, int>(l, r)));
	}
	void brk(int c, int idx){
		set<pair<int, int>>::iterator it = prev(table[c].lower_bound(pair<int, int>(idx+1, idx)));
		int l = it->first, r = it->second;
		del(c, l, r);
		if (l < idx)	add(c, l, idx);
		if (idx+1 < r)	add(c, idx+1, r);
	}
	void merge(int c, set<pair<int, int>>::iterator it1, set<pair<int, int>>::iterator it2, set<pair<int, int>>::iterator &output){
		int l1 = it1->first, r1 = it1->second, l2 = it2->first, r2 = it2->second;
		if (r1 == l2){
			del(c, l1, r1);
			del(c, l2, r2);
			output = add(c, l1, r2);
		}
	}
	void ins(int c, int idx){
		set<pair<int, int>>::iterator it = add(c, idx, idx+1);
		if (it != table[c].begin())	merge(c, prev(it), it, it);
		if (next(it) != table[c].end())	merge(c, it, next(it), it);
	}
public:
    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
        for (int i = 0; i < s.length(); i++){
        	ins(s[i]-'a', i);
		}
		vector<int> ret;
		for (int k = 0; k < queryCharacters.length(); k++){
			char ch = queryCharacters[k];
			int idx = queryIndices[k];
			if (ch == s[idx]){
				ret.push_back(*mset.rbegin());
				continue;
			}
			brk(s[idx]-'a', idx);
			ins(ch-'a', idx);
			s[idx] = ch;
			ret.push_back(*mset.rbegin());
		}
		return ret;
    }
};
