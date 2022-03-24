#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int ret = 0;
	double t = 0.0;
	int n;
	while (cin >> n && n > 0){
		t = 0.0;
		for (int i = 1; i <= n; i++){
			t += log10(i);
		}
		ret = 1 + (int)t;
		cout << ret << endl;
	}
	
	return 0;
}

