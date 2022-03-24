#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthLargestValue(vector<vector<int>>& matrix, int k) {
	int m = matrix.size(), n = matrix[0].size();
	vector<int> result;
	vector<vector<int>> prefix(m+1, vector<int>(n+1));
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			prefix[i][j] = prefix[i-1][j-1] ^ prefix[i-1][j] ^ prefix[i][j-1] ^ matrix[i-1][j-1];
			result.push_back(prefix[i][j]);
		}
	}
	nth_element(result.begin(), result.begin()+k-1, result.end(), greater<int>());
	return result[k-1];
}


int main(){
	vector<vector<int>> matrix = {{5,2}, {1,6}};
	for (int i = 1; i <= 4; i++){
		cout << kthLargestValue(matrix, i) << endl;
	} 
	
	int a = 10, b = 15;
	a ^= b ^= a ^= b;
	cout << a << " " << b << endl; 

	return 0;
}

