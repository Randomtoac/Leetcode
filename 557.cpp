#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
string reverseWords(string s);
int main(){
	string s("Let's take LeetCode contest");
	string t = reverseWords(s);
	cout << t << endl;
	return 0;
}
string reverseWords(string s) {
	int p = 0, q = 0;
	s = s + " "; 
	for (int i = 0; i < s.length(); i++){
		if (s[i] != ' ')	continue;
		q = i - 1;
		while (p < q)	swap(s[p++], s[q--]);
		p = i + 1;
	}
	s.erase(s.length()-1);
	return s;
}
