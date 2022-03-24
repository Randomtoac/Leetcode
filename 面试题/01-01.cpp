#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isUnique(string astr);
int main(){

	return 0;
}
bool isUnique(string astr){
	if (!astr.length())	return true;
	if (astr.length() > 26)	return false;
	unsigned int mark = 0;
	for (char& ch : astr){
		short dist = ch - 'a';
		if ((mark >> dist) & 1)	return false;
		mark |= 1 << dist;
	}
	return true;
}
