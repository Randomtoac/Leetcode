#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int maxArea(vector<int>& height);
int main(){

	return 0;
}
int maxArea(vector<int>& height){
	int i = 0, j = height.size()-1;
	int ret = 0;
	while (i < j){
		ret = max(ret, (j-i)*min(height[i], height[j]));
		if (height[i] > height[j])	j--;
		else	i++;
	}
	return ret;
}
