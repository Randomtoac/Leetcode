#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
bool isSubsequence(string s, string t);
int main(){
	string s = "axc", t = "ahbgdc";
	cout << isSubsequence(s, t) << endl;
	return 0;
}
bool isSubsequence(string s, string t){
	if (!s.length())  return true;
	s += "#";
	int p = 0, q = 0;
	while(q < t.length()){
		if (s[p] == t[q])	p++;
		q++;
		if (s[p] == '#')	return true;
	}
	return false;
}
