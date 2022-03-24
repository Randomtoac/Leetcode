#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int nextBeautifulNumber(int n);
int main(){
	int n = 23110;
	cout << nextBeautifulNumber(n) << endl;
	return 0;
}
int nextBeautifulNumber(int n){
	if (n == 0)	return 1;
	if (n >= 666666)	return 1224444;
	unordered_map<int, int> mp;
	while (++n){
		mp.clear();
		int cur = n;
		bool flag7 = false, ret = true;
		while (cur){
			int t = cur%10;
			cur /= 10;
			if (t > 6){
				flag7 = true;
				break;
			}
			mp[t]++;
		}
		if (flag7)	continue;
		for (auto& [i, j] : mp){
			if (i != j){
				ret = false;
				break;
			}
		}
		if (ret)	return n;
	}
	return -1;
}

