#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string minNumber(vector<int>& nums);
static bool cmp(string a, string b);
int main(){

	return 0;
}
string minNumber(vector<int>& nums){
	vector<string> vs;
	for (int& x : nums){
		vs.push_back(to_string(x));
	}
	sort(vs.begin(), vs.end(), cmp);
	string ret;
	for (string& x : vs){
		ret.append(x);
	}
	return ret;
}
static bool cmp(string a, string b){
	return a+b <= b+a;
}
