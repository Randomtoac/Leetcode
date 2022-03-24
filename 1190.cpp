#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    string reverseParentheses(string s) {
		stack<string> st;
		string str;
		for (char& ch : s){
			if (ch == '('){
				st.push(str);
				str.clear();
			}
			else if (ch == ')'){
				str = st.top().append(str.rbegin(), str.rend());
				st.pop();
			}
			else{
				str.push_back(ch);
			}
		}
		return str;
    }
};
