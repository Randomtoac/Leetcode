#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> generateMatrix(int n);
int main(){

	return 0;
}
vector<vector<int>> generateMatrix(int n){
	int t = 1, x = 0, y = 0, di = 0;
	vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	vector<vector<int>> ret(n, vector<int>(n, 0));
	while(t <= n*n){
		ret[x][y] = t++;
		int nextx = x + dir[di][0];
		int nexty = y + dir[di][1];
		if (nextx<0 || nextx>=n || nexty<0 || nexty>=n || ret[nextx][nexty] != 0){
			di = (di + 1) % 4;
		}
		x += dir[di][0];
		y += dir[di][1];
	}
	return ret;
}
