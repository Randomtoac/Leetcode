#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int removePalindromeSub(string s);
int main(){

	return 0;
}
int removePalindromeSub(string s){
	for (int i = 0, j = s.length()-1; i < j; i++, j--){
		if (s[i] != s[j])	return 2;
	}
	return s.length() > 0;
}
vector<int> v;
v.
