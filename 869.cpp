#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
bool reorderedPowerOf2(int n);
string lltostring(long long n);
int main(){

	return 0;
}
string lltostring(long long n){
	stringstream ss;
	ss << n;
	string ret;
	ss >> ret;
	return ret;
}
bool reorderedPowerOf2(int n) {
	unordered_map<int, unordered_set<string>> vst;
	long long t = 1;
	while (1){
		string st = lltostring(t);
		int tl = st.length();
		if (tl > 10)	break;
		sort(st.begin(), st.end());
		vst[tl].insert(st);
		t <<= 1;
	}
	string sn = to_string(n);
	sort(sn.begin(), sn.end());
	if (vst[sn.length()].count(sn))	return true;
	return false;
}
