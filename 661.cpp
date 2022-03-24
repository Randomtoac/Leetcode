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
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
		int m = img.size(), n = img[0].size();
		vector<vector<int>> presum(m+2, vector<int>(n+2, 0));
		vector<vector<int>> ret(m, vector<int>(n, 0));
		for (int i = 1; i <= m; i++){
			for (int j = 1; j <= n; j++){
				presum[i][j] = presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1] + img[i-1][j-1];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				int ir = i + 2 > m ? m : i + 2;
				int jr = j + 2 > n ? n : j + 2;
				int il = i - 1 < 0 ? 0 : i - 1;
				int jl = j - 1 < 0 ? 0 : j - 1;
				int cursum = presum[ir][jr] - presum[il][jr] - presum[ir][jl] + presum[il][jl];
				int rows = ir - il;
				int cols = jr - jl;
				ret[i][j] = cursum / (rows * cols);
			}
		}
		return ret;
    }
};
