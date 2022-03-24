#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minimumTime(string s);
int main(){

	return 0;
}
int minimumTime(string s){
	int n = s.length();
	vector<int> ldp(n+1, 0), rdp(n+1, 0);
	for (int i = 0; i < n; i++){
		if (s[i] == '0'){
			ldp[i+1] = ldp[i];
		}
		else{
			ldp[i+1] = min(i+1, ldp[i]+2);
		}
		if (s[n-1-i] == '0'){
			rdp[n-1-i] = rdp[n-i];
		}
		else{
			rdp[n-1-i] = min(i+1, rdp[n-i]+2);
		}
	}
	int ret = n;
	for (int i = 0; i < n; i++){
		ret = min(ret, ldp[i] + rdp[i]);
	}
	return ret;
}
