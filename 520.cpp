#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool detectCapitalUse(string word);
int main(){

	return 0;
}
bool detectCapitalUse(string word){
	int len = word.length();
	if (len == 1)	return true;
	if (islower(word[0])){
		for (char& ch : word){
			if (isupper(ch))	return false;
		}
		return true;
	}
	else{
		for (int i = 1; i < len-1; i++){
			if (isupper(word[i]) ^ islower(word[i+1]))	return false;
		}
		return true;
	}
}
