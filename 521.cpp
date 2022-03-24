#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findLUSlength(string a, string b);
int main(){

	return 0;
}
int findLUSlength(string a, string b){
	return a == b ? -1 : max(a.length(), b.length());
}
