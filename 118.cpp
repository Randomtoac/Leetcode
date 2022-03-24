#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> generate(int numRows);
int main(){
	vector<vector<int>> res = generate(5);
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
vector<vector<int>> generate(int numRows) {
	vector<vector<int>> ret(numRows);
	for (int i = 0; i < numRows; i++){
		ret[i].resize(i+1);
		ret[i][0] = 1;
		ret[i][i] = 1;
		for (int j = 1; j <= i-1; j++){
			ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
		}
	}
	return ret;
}
