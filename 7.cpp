#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int reverse(int x);
int main(){

	return 0;
}
int reverse(int x){
	if (x == 0 || x == -2147483647-1)	return 0;
	bool neg = false;
	if (x < 0){
		neg = true;
		x = -x;
	}	
	string s = to_string(x);
	while (s.back() == '0')	s.pop_back();
	string t = string(s.rbegin(), s.rend());
	if (t.length() > 9 && t > "2147483647")	return 0;
	int ret = stoi(t);
	return neg ? -ret : ret;
}
