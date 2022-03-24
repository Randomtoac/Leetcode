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
	static bool cmp(string a, string b){
		if (a.length() != b.length())	return a.length() < b.length();
		return a > b;
	}
    string longestWord(vector<string>& words) {
		unordered_set<string, int> st;
		sort(words.begin(), words.end(), cmp);
		string ret = "";
		for (string& s : words){
			if (s.length() == 1){
				st.insert(s);
				ret = s;
				continue;
			}
			if (st.count(s.substr(0, s.length()-1))){
				st.insert(s);
				ret = s;
			}	
		}
		return ret;
    }
};
