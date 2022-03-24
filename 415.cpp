#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
string addStrings(string num1, string num2);
int main(){

	return 0;
}
string addStrings(string num1, string num2){
	int carry = 0;
	string ret = "";
	int p = num1.length()-1, q = num2.length()-1;
	while (p >= 0 || q >= 0 || carry){
		int x = 0, y = 0;
		if (p >= 0)	x = num1[p]-'0';
		if (q >= 0)	y = num2[q]-'0';
		int sum = x + y + carry;
		carry = sum / 10;
		ret = (char)(sum%10 + '0') + ret;
		p--;
		q--;
	}
	return ret;
}
