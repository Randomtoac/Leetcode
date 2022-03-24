#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
string toHex(int num);
int main(){
	int num;
	while (cin >> num && num != 0){
		cout << toHex(num) << endl;
	}
	return 0;
}
string toHex(int num){
	if (!num)	return "0";
	string s = "";
	for (int i = 7; i >= 0; i--){
		int cur = (num >> i*4) & 0xf;
		if (!s.length() && !cur)	continue;
		char ch = cur > 9 ? 'a'+cur-10 : '0'+cur;
		s.push_back(ch);
	} 
	return s;
}
