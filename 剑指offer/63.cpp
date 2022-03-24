#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices);
int main(){

	return 0;
}
int maxProfit(vector<int>& prices){
	int ret = 0, minn = INT_MAX, maxx = 0;
	for (int x : prices){
		if (x < minn){
			minn = x;
			maxx = 0;
		}	
		if (x > maxx)	maxx = x;
		ret = max(ret, maxx - minn);
	}
	return ret;
}
