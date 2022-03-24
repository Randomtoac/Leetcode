#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxPoints(vector<vector<int>>& points);
int gcd(int a, int b);
int main(){

	return 0;
}
int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}
int maxPoints(vector<vector<int>>& points){
	int ret = 0;
	int n = points.size();
	if (n <= 2)	return n;
	for (int i = 0; i < n; i++){
		if (ret >= n-i || ret > n/2)	break;
		unordered_map<int, int> mp;
		for (int j = i+1; j < n; j++){
			int a = points[i][0] - points[j][0];
			int b = points[i][1] - points[j][1];
			if (!a)	b = 1;
			else if (!b)	a = 1;
			else{
				if (b < 0){
					a = -a;
					b = -b;
				}
				int g = gcd(abs(a), abs(b));
				a /= g;
				b /= g;
			}
			mp[b + a*20001]++;
		}
		int m = 0;
		for (auto& [key, val] : mp){
			m = max(m, val+1);
		}
		ret = max(ret, m);
	}
	return ret;
}
