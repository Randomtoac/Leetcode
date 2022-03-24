#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool verifyPostorder(vector<int>& postorder);
bool dfs(vector<int>& postorder, int left, int right);
int main(){

	return 0;
}
bool verifyPostorder(vector<int>& postorder){
	return dfs(postorder, 0, postorder.size()-1);
}
bool dfs(vector<int>& postorder, int left, int right){
	if (left >= right)	return true;
	int p = left;
	while (postorder[p] < postorder[right])	p++;
	int q = p;
	whlie (postorder[p] > postorder[right])	p++;
	return p == right && dfs(postorder, left, q-1) && dfs(postorder, q, right-1); 
}
