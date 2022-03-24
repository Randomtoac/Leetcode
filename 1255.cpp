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
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
		vector<int> lettertable(26, 0);
		for (char& ch : letters)	lettertable[ch-'a']++;
		int ret = 0;
		for (int i = 1; i < (1 << words.size()); i++){
			vector<int> used = getUse(words, i);
			ret = max(ret, calcScore(used, lettertable, score));
		}
		return ret;
    }
    vector<int> getUse(vector<string>& words, int i){
    	vector<int> used(26, 0);
    	for (int j = 0; j < words.size(); j++){
    		if (!(i & (1 << j)))	continue;
    		for (char& ch : words[j])	used[ch-'a']++;
		}
		return used;
	}
	int calcScore(vector<int>& used, vector<int>& lettertable, vector<int>& score){
		int ret = 0;
		for (int i = 0; i < 26; i++){
			if (used[i] > lettertable[i])	return 0;
			ret += used[i] * score[i];
		}
		return ret;
	}
};
