#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minimumOperations(vector<int>& nums);
int main(){

	return 0;
}
int minimumOperations(vector<int>& nums){
	unordered_map<int, int> mp1, mp2;
	int max11 = 0, max12 = 0, max21 = 0, max22 = 0;
	int t1, t2;
	bool flag = true;
	for (int i = 0; i < nums.size(); i++){
		if (flag){
			mp1[nums[i]]++;
			if (mp[nums[i]] > max11){
				max11 = mp1[nums[i]];
				max12 = max11;
				t1 = nums[i];
			}
			else if (mp1[nums[i]] > max12)	max12 = mp1[nums[i]];
		}
		else{
			mp2[nums[i]]++;
			if (mp[nums[i]] > max21){
				max21 = mp2[nums[i]];
				max22 = max21;
				t2 = nums[i];
			}
			else if (mp2[nums[i]] > max22)	max22 = mp2[nums[i]];
		}
		flag = !flag;
	}
	if (t1 != t2)	return nums.size() - max11 - max21;
	else{
		int ret = max(max11+max22, max21+max12);
		return nums.size()-ret;
	}
}

int minimumOperations(vector<int>& nums){
	unordered_map<int, int> mp1, mp2;
	int max11 = 0, max12 = 0, max21 = 0, max22 = 0;
	int t1, t2;
	bool flag = true;
	for (int i = 0; i < nums.size(); i++){
		if (flag)	mp1[nums[i]]++;
		else	mp2[nums[i]]++;
		flag = !flag;
	}
	for (auto &[k, v] : mp1){
		if (v > max11){
			max12 = max11;
			max11 = v;
			t1 = k;
		}
		else if (v > max12)	max12 = v;
	}
	for (auto &[k, v] : mp2){
		if (v > max21){
			max22 = max21;
			max21 = v;
			t2 = k;
		}
		else if (v > max22)	max22 = v;
	}
	cout << t1 << t2<< endl;;
        cout << max11 <<" "<< max12<< endl;
        cout << max21 << " "<< max22 << endl;
	if (t1 != t2)	return nums.size() - max11 - max21;
	else{
		int ret = max(max11+max22, max21+max12);
		return nums.size()-ret;
	}
}
