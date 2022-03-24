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
    string defangIPaddr(string address) {
		string ret;
		const string change = "[.]";
		for (char& ch : address){
			if (ch == '.'){
				ret.append(change);
			}
			else	ret.push_back(ch);
		}
		return ret;
    }
};
