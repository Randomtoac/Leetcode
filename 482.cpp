#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
string licenseKeyFormatting(string s, int k);
int main(){

	return 0;
}
string licenseKeyFormatting(string s, int k){
	string ret = "";
	int j = 0;
	for (int i = s.length()-1; i >= 0; i--){
		if (s[i] == '-')	continue;
		ret.push_back(toupper(s[i]));
		j++;
		if (j % k == 0){
			ret.push_back('-');
		}
	}
	if (ret.length() && ret.back() == '-')	ret.pop_back();
	reverse(ret.begin(), ret.end());
	return ret;
}
