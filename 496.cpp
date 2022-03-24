#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2);
int main(){

	return 0;
}
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
	int m = nums1.size(), n = nums2.size();
	vector<int> ret(m, -1);
	for (int i = 0; i < m; i++){
		int cur = nums1[i];
		for (int j = 0; j < n; j++){
			if (nums2[j] != cur)	continue;
			for (int k = j+1; k < n; k++){
				if (nums2[k] > cur){
					ret[i] = nums2[k];
					break;
				}
			}
			break;
		}
	}
	return ret;
}
