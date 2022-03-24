#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int trap(vector<int>& height);
int main(){

	return 0;
}
int trap(vector<int>& height){
	int n = height.size(), ret = 0;
	vector<int> left(n, height[0]), right(n, height[n-1]);
	for (int i = 1; i < n; i++)	left[i] = max(height[i], left[i-1]);
	for (int i = n-2; i >= 0; i--)	right[i] = max(height[i], right[i+1]);
	for (int i = 1; i < n-1; i++){
		ret += min(left[i], right[i]) - height[i];
	}
	return ret;
}
