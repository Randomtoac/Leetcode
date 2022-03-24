#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string simplifyPath(string path);
vector<string> getPaths(string& s, char d);
int main(){

	return 0;
}
string simplifyPath(string path){
	vector<string> stack;
	vector<string> paths = getPaths(path, '/');
	for (string& name : paths){
		if (name == ".."){
			if (!stack.empty()){
				stack.pop_back();
			}
		}
		else if (!name.empty() && name != "."){
			stack.push_back(name);
		}
	}
	string ret;
	if (stack.empty()){
		ret = "/";
	}
	else{
		for (string& name : stack){
			ret += "/" + name;
		}
	}
	return ret;
}
vector<string> getPaths(string& s, char d){
	vector<string> paths;
	string cur = "";
	for (char& ch : s){
		if (ch == d){
			paths.push_back(cur);
			cur.clear();
		}
		else{
			cur += ch;
		}
	}
	paths.push_back(cur);
	return paths;
}
