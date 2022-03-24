#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool canConstruct(string ransomNote, string magazine);
int main(){
	string r = "aa", m = "aab";
	cout << canConstruct(r, m) << endl;
	return 0;
}
bool canConstruct(string ransomNote, string magazine) {
	unordered_map<char, int> mp;
	for (int i = 0; i < magazine.length(); i++){
		mp[magazine[i]]++;
	}
	for (int i = 0; i < ransomNote.length(); i++){
		mp[ransomNote[i]]--;
	}
	for (int i = 0; i < ransomNote.length(); i++){
		if (mp[ransomNote[i]] < 0)	return false;
	}
	return true;
}
