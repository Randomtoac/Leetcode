#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
bool isAnagram(string s, string t);
int main(){
	string s = "anagram", t = "nagaram";
	cout << isAnagram(s, t) << endl;
	return 0;
}
bool isAnagram(string s, string t) {
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	return s == t;
}
