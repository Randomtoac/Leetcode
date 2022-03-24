#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int longestPalindrome(vector<string>& words);
int main(){

	return 0;
}
int longestPalindrome(vector<string>& words){
	int sameflag = 0;
	int samelen = 0;
	int ret = 0;
	unordered_map<string, int> mp;
	for (string& s : words){
		string t = s[1] + s;
		t.pop_back();
		if (s == t){
			mp[s]++;
			cout << s << " " << mp[s] << endl;
			if (mp[s] == 2){
				mp[s] = 0;
				sameflag -= 2;
				samelen += 4;
			}
			sameflag++;
			continue;
		}
		if (mp[t] > 0){
			ret += 4;
			mp[t]--;
		}
		else{
			mp[s]++;
		}
	}
	cout << ret << " " << sameflag << endl;
	return ret + samelen + 2*(sameflag == 0 ? 0 : 1);
}
