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
    int findKthPositive(vector<int>& arr, int k) {
		for (int i = 0; i < arr.size(); i++){
			if (arr[i] <= k)	k++;
			else break;
		}
		return k;
    }
};
