#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(int x);
int main(){

	return 0;
}
bool isPalindrome(int x){
	string sx = to_string(x);
	string sr = sx;
	reverse(sr.begin(), sr.end());
	return sx == sr;
}
