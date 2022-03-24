#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    string reverseWords(string s) {
		stringstream ss;
		ss << s;
		vector<string> strs;
		while (ss >> s){
			strs.push_back(s);
		}
		string ret;
		for (int i = strs.size()-1; i >= 0; i--){
			ret.append(strs[i]);
			ret.push_back(' ');
		}
		ret.pop_back();
		return ret;
    }
};
