#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> cellsInRange(string s);
int main(){

	return 0;
}
vector<string> cellsInRange(string s){
	vector<string> ret;
	for (char ch = s[0]; ch <= s[3]; ch++){
		for (int i = s[1]; i <= s[4]; i++){
			string t = to_string(i-'0');
			t = ch + t;
			ret.push_back(t);
		}
	}
	return ret;
}
