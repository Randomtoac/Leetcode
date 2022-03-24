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
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<bool>> coulddig(n, vector<bool>(n, false));
        for (auto& v : dig){
        	coulddig[v[0]][v[1]] = true;
		}
		int ret = 0;
		for (auto& v : artifacts){
			bool flag = true;
			for (int i = v[0]; i <= v[2]; i++){
				for (int j = v[1]; j <= v[3]; j++){
					if (!coulddig[i][j])	flag = false;
				}
			}
			if (flag)	ret++;
		}
		return ret;
    }
};
