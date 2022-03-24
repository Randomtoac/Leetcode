#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool CheckPermutation(string s1, string s2);
int main(){

	return 0;
}
bool CheckPermutation(string s1, string s2){
	if (s1.length() != s2.length())	return false;
	short ascii[128] = {0};
	for (int i = 0; i < s1.length(); i++){
		ascii[s1[i]-'a']++;
		ascii[s2[i]-'a']--;
	}
	for (short& si : ascii){
		if (si)	return false;
	}
	return true;
}
