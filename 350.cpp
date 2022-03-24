#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
int main(){
	vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};
	vector<int> res = intersect(nums1, nums2);
	for (int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}
	return 0;
}
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() > nums2.size())	return intersect(nums2, nums1);
	unordered_map<int, int> m;
	for (int i = 0; i < nums1.size(); i++){
		m[nums1[i]]++;
	}
	vector<int> ret;
	for (int i = 0; i < nums2.size(); i++){
		if (m[nums2[i]]){
			m[nums2[i]]--;
			ret.push_back(nums2[i]);
		}
	}
	return ret;
}
