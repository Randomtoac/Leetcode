#include <iostream>
#include <string>
#include <vector>
using namespace std;

int numDecodings(string s) {
	vector<int> f(s.size()+1);
	f[0] = 1;
	for (int i = 1; i <= s.size(); i++){
		f[i] = 0;
		if (s[i-1] != '0'){
			f[i] += f[i-1];
		}
		if (i > 1 && 10*(s[i-2]-'0')+s[i-1]-'0' >= 10 && 10*(s[i-2]-'0')+s[i-1]-'0' <= 26){
			f[i] += f[i-2];
		}
		cout << i << ": " << f[i] << endl;
	}
	return f[s.size()];
}

int main(){
	string s1 = "12";
	string s2 = "226";
	string s3 = "06";
	cout << numDecodings(s1) << endl;
	cout << numDecodings(s2) << endl;
	cout << numDecodings(s3) << endl; 

	return 0;
}

