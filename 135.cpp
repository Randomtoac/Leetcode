#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int candy(vector<int>& ratings);
int main(){

	return 0;
}
int candy(vector<int>& ratings){
	int n = ratings.size();
	vector<int> fromleft(n, 1), fromright(n, 1);
	for (int i = 1; i < n; i++){
		fromleft[i] = ratings[i] > ratings[i-1] ? fromleft[i-1]+1 : 1;
		int j = n - 1 - i;
		fromright[j] = ratings[j] > ratings[j+1] ? fromright[j+1]+1 : 1;
	}
	int ret = 0;
	for (int i = 0; i < n; i++){
		ret += max(fromleft[i], fromright[i]);
	}
	return ret;
}
