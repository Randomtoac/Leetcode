#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> combine(int n, int k);
void nextlevel(int start, int n, int k, vector<int>& last, vector<vector<int>>& ret);
int main(){

	return 0;
}
void nextlevel(int start, int n, int k, vector<int>& last, vector<vector<int>>& ret){
	if (last.size() == k){
		ret.push_back(last);
		return;
	}
	for (int i = start; i <= n-k+last.size()+1; i++){
		last.push_back(i);
		nextlevel(i+1, n, k, last, ret);
		last.pop_back();
	}
}
vector<vector<int>> combine(int n, int k) {
	vector<vector<int>> ret;
	vector<int> last;
	nextlevel(1, n, k, last, ret);
	return ret;
}
