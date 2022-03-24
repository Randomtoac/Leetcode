#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
bool checkInclusion(string s1, string s2);
int main(){
	string s1 = "ab", s2 = "eidboaooo";
	cout << checkInclusion(s1, s2) << endl;
	return 0;
}
bool checkInclusion(string s1, string s2) {
	if (s1.length() > s2.length())  return false;
	vector<int> c1(26), c2(26); 
	for (int i = 0; i < s1.length(); i++){
		c1[s1[i]-'a']++;
		c2[s2[i]-'a']++;
	}
	if (c1 == c2)	return true;
	for (int i = s1.length(); i < s2.length(); i++){
		c2[s2[i]-'a']++;
		c2[s2[i-s1.length()]-'a']--;
		if (c1 == c2)	return true;
	}
	return false;
}
