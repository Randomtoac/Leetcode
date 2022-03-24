#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> findAnagrams(string s, string p);
void printmp(unordered_map<char, int>& mp);
int main(){
	string s = "cbaebabacd", p = "abc";
	vector<int> ret = findAnagrams(s, p);
	cout << "Result:" << endl;
	for (int& i : ret)	cout << i << " ";
	return 0;
}
vector<int> findAnagrams(string s, string p){
	int np = p.length(), ns = s.length();
	vector<int> ret;
	if (np > ns)	return ret;
	int i = 0, j = 0;
	unordered_map<char, int> mp;
	for (char& ch : p){
		mp[ch]++;
	}
	while (j < np){
		mp[s[j]]--;
		if (mp[s[j]] == 0)	mp.erase(s[j]);
		j++;
	}
	while (j < ns){
		printmp(mp);
		if (!mp.size())	ret.push_back(i);
		mp[s[i]]++;
		if (mp[s[i]] == 0)	mp.erase(s[i]);
		mp[s[j]]--;
		if (mp[s[j]] == 0)	mp.erase(s[j]);
		i++;
		j++; 
	}
	if (!mp.size()) ret.push_back(i);
	return ret;
}
void printmp(unordered_map<char, int>& mp){
	int n = mp.size();
	cout << n << " ";
	if (!n)	cout << endl;
	else{
		for (auto m : mp){
			cout << m.first << ":" << m.second << " ";
		}
		cout << endl;
	}
}
