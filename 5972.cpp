#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int numberOfArrays(vector<int>& differences, int lower, int upper);
int main(){

	return 0;
}
int numberOfArrays(vector<int>& differences, int lower, int upper){
	long long minn = 0, maxx = 0, t = 0;
	for (int& num : differences){
		t += num;
		if (t > maxx)	maxx = t;
		if (t < minn)	minn = t;
	}
	long long ret = upper - lower - (maxx - minn) + 1;
	return ret >= 0 ? ret : 0;
}
