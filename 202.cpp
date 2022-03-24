#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isHappy(int n);
int main(){
	cout << isHappy(19) << endl;
	return 0;
}
unordered_set<int> st;
bool isHappy(int n){
	if (n == 1)	return true;
	int sum = 0;
	while(n){
		int x = n%10;
		sum += x*x;
		n /= 10;
	}
	if (st.count(sum))	return false;
	st.insert(sum);
	return isHappy(sum);
}
