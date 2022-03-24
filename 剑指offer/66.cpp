#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> constructArr(vector<int>& a);
int main(){

	return 0;
}
vector<int> constructArr(vector<int>& a){
	vector<int> left(a.size(), 1), right(a.size(), 1);
	for (int i = 1; i < a.size(); i++){
		left[i] = left[i-1] * a[i-1];
		right[i] = right[i-1] * a[a.size()-i];
	}
	for (int i = 0; i < left.size(); i++){
		left[i] *= right[a.size()-1-i];
	}
	return left;
}
