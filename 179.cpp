#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string largestNumber(vector<int>& nums);
int main(){

	return 0;
}
static bool cmp(string a, string b){
	string ab = a + b;
	string ba = b + a;
	return ab > ba;
}
string largestNumber(vector<int>& nums){
	vector<string> strs;
	for (int& num : nums)	strs.push_back(to_string(num));
	sort(strs.begin(), strs.end(), cmp);
	string ret = "";
	for (string& str : strs)	ret.append(str);
	if (ret[0] == '0')	return "0";
	return ret;
}
