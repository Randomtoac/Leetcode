#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string countAndSay(int n); 
int main(){

	return 0;
}
string countAndSay(int n){
	string last = "1";
	int k = 1;
	while (k < n){
		string temp;
		last.push_back('#');
		char c = last[0];
		int cnt = 1;
		for (int i = 1; i < last.length(); i++){
			if (last[i] != c){
				temp.append(to_string(cnt));
				temp.push_back(c);
				c = last[i];
				cnt = 1;
			}
			else{
				cnt++;
			}
		}
		last = temp;
		k++;
	}
	return last;
}
