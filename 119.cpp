#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> getRow(int rowIndex);
int main(){
	vector<int> res = getRow(3);
	for (int i = 0; i < 4; i++){
		cout << res[i] << " " << endl;
	}
	return 0;
}
vector<int> getRow(int rowIndex){
	vector<vector<int>> ret(rowIndex+1);
	for (int i = 0; i <= rowIndex; i++){
		ret[i].resize(i+1);
		ret[i][0] = 1;
		ret[i][i] = 1;
		for (int j = 1; j <= i-1; j++){
			ret[i][j] = ret[i-1][j-1] + ret[i-1][j];
		}
	}
	return ret[rowIndex];
}
