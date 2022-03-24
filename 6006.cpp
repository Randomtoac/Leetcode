#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
long long minimumRemoval(vector<int>& beans);
int main(){

	return 0;
}
long long minimumRemoval(vector<int>& beans){
	sort(beans.begin(), beans.end());
	int n = beans.size();
	long long ret = LONG_MAX;
	long long sum = 0;
	for (int i = 0; i < n; i++){
		sum += beans[i];
	}
	for (int i = 0; i < n; i++){
		long long t = (long long)beans[i]*(n-i);
		ret = ret < sum - t ? ret : sum - t;
	}
	return ret;
}
