#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void reverseString(vector<char>& s);
int main(){
	vector<char> s = {'H','e','l','l','o','h'};
	reverseString(s);
	for (int i = 0; i < s.size(); i++)	cout << s[i];
	return 0;
}
void reverseString(vector<char>& s) {
	int p = 0, q = s.size()-1;
	while(p<q)	swap(s[p++], s[q--]);
}
