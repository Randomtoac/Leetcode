#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string convert(string s, int numRows);
int main(){

	return 0;
}
string convert(string s, int numRows){
	int currow = 0;
	int nextrow = 1;
	if (numRows == 1)	return s;
	vector<string> row(numRows, "");
	for (char& ch : s){
		row[currow].push_back(ch);
		if (currow == 0)	nextrow = 1;
		else if (currow == numRows-1)	nextrow = -1;
		currow += nextrow;
	}
	string ret = "";
	for (string& t : row){
		ret += t;
	}
	return ret;
}
