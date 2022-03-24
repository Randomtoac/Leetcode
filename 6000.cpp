#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> sortEvenOdd(vector<int>& nums);
int main(){

	return 0;
}
vector<int> sortEvenOdd(vector<int>& nums){
	vector<int> v1, v2, v3;
	bool flag = true;
	for (int& i : nums){
		if (flag)	v1.push_back(i);
		else		v2.push_back(i);
		flag = !flag;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	v3.push_back(v1[0]);
	if (flag)	v1.push_back(0);
	for (int i = 0; i < v2.size(); i++){
		v3.push_back(v2[v2.size()-1-i]);
		v3.push_back(v1[i+1]);
	}
	if (flag)	v3.pop_back();
	return v3;
}
void print(vector<int>& v){
	for (auto i : v)	cout << i << " ";
	cout << endl;
}
