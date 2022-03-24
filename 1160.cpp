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
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
		vector<int> table(26, 0);
		for (char& ch : chars){
			table[ch-'a']++;
		}
		int ret = 0;
		for (string& s : words)	ret += check(s, table);
		return ret;
    }
    int check(const string word, vector<int> table){
    	for (char ch : word)	if (--table[ch-'a'] < 0)	return 0;
		return word.size();
	}
};
