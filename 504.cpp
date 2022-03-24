#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string convertToBase7(int num);
int main(){

	return 0;
}
string convertToBase7(int num){
	if (num == 0)	return "0";
	bool neg = false;
	if (num < 0){
		num = -num;
		neg = true;
	}
	string t;
	while (num){
		char ch = '0' + num%7;
		t.push_back(ch);
		num /= 7;
	}
	string ret = string(t.rbegin(), t.rend());
	if (neg)	ret = "-" + ret;
	return ret;
}
