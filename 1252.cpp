#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
		vector<bool> rows(m, false), cols(n, false);
		for (vector<int>& v : indices){
			rows[v[0]] = !rows[v[0]];
			cols[v[1]] = !cols[v[1]];
		}
		int ret = 0;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				if (rows[i] && !cols[j])	ret++;
				else if (!rows[i] && cols[j])	ret++;
			}
		}
		return ret;
    }
};
