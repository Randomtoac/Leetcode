#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int>& digits);
int main(){

	return 0;
}
vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] != 9) {
            ++digits[i];
            for (int j = i + 1; j < n; ++j) {
                digits[j] = 0;
            }
            return digits;
        }
    }

    vector<int> ans(n + 1);
    ans[0] = 1;
    return ans;
}
