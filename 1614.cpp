#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxDepth(string s);
int main(){

	return 0;
}
int maxDepth(string s){
	int ret = 0;
	int cursize = 0;
	vector<char> stack;
	for (char& ch : s){
		if (ch == '('){
			stack.push_back(ch);
			ret = max(ret, ++cursize);
		}
		else if (ch == ')'){
			stack.pop_back();
			cursize--;
		}
	}
	return ret;
}
