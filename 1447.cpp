#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<string> simplifiedFractions(int n);
string toFractions(int a, int b);
int main(){

	return 0;
}
vector<string> simplifiedFractions(int n){
	vector<string> ret;
	for (int i = 2; i <= n; i++){
		for (int j = 1; j < i; j++){
			if (gcd(i, j) == 1){
				ret.push_back(toFractions(j, i));
			}
		}
	}
	return ret;
}
int gcd(int a, int b){
	if (!b)	return a;
	return gcd(b, a%b); 
}
string toFractions(int a, int b){
	string ret = to_string(a);
	ret.push_back('/');
	ret.append(to_string(b));
	return ret;
}
