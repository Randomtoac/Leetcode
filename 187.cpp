#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
vector<string> findRepeatedDnaSequences(string s);
int main(){

	return 0;
}
vector<string> findRepeatedDnaSequences(string s){
	vector<string> ret;
	if (s.length() < 11)	return ret;
	unordered_map<string, int> mp;
	for (int i = 0; i <= s.length()-10; i++){
		mp[s.substr(i, 10)]++;
	}
	for (auto it = mp.begin(); it != mp.end(); it++){
		if ((*it).second > 1){
			ret.push_back((*it).first);
		}
	}
	return ret;
}
