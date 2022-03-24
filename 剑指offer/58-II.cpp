#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string reverseLeftWords(string s, int n);
int main(){

	return 0;
}
string reverseLeftWords(string s, int k){
	return s.substr(k, s.length()-k).append(s.substr(0, k));
}
