#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> grayCode(int n);
int main(){

	return 0;
}
vector<int> grayCode(int n){
	vector<int> ret(1 << n);
	for (int i = 0; i < ret.size(); i++){
		ret[i] = (i >> 1) ^ i;
	}
	return ret;
}
vector<int> grayCode(int n){
	vector<int> ret;
	vector<string> str_gray = getGray(n);
	for (string& s : str_gray){
		ret.push_back(stoi(s));
	}
	return ret;
}
vector<string> getGray(int n){
	
}
