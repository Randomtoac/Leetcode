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
    long long maximumSubsequenceCount(string text, string pattern) {
        if (pattern[0] == pattern[1]){
        	long long cnt = 0;
        	for (auto ch : text){
        		if (ch == pattern[0])	cnt++;
			}
			return cnt * (cnt+1) / 2;
		}
		int n = text.length();
		vector<int> dp0(n+1, 0), dp1(n+2, 0);
		for (int i = 1; i <= n; i++){
			dp0[i] = dp0[i-1];
			if (text[i-1] == pattern[0]){
				dp0[i]++;
			}
		}
		for (int i = n; i > 0; i--){
			dp1[i] = dp1[i+1];
			if (text[i-1] == pattern[1]){
				dp1[i]++;
			}
		}
		long long ret = 0;
		for (int i = 1; i <= n; i++){
			if (text[i-1] == pattern[0]){
				ret += dp1[i];
			}
		}
		int ins = max(dp0[n], dp1[1]);
		return ret + ins;
    }
};
