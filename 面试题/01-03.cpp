#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string replaceSpaces(string S, int length);
int main(){

	return 0;
}
string replaceSpaces(string S, int length){
	string ret = "";
	for (int i = 0; i < length; i++){
		if (S[i] != ' ')	ret += S[i];
		else	ret += "%20";
	}
	return ret;
}
