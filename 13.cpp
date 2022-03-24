#include <iostream>
#include <map>
using namespace std;

map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

int romanToInt(string s) {
	int res = 0;
	for (int i = 0; i < s.length(); i++){
		if (i < s.length()-1 && m[s[i]] < m[s[i+1]])	res -= m[s[i]];
		else	res += m[s[i]];
	}
	return res;
}

int main(){
	string s[5] = {"III", "IV", "IX", "LVIII", "MCMXCIV"};
	for (int i = 0; i < 5; i++){
		cout << romanToInt(s[i]) << endl;
	}

	return 0;
}

