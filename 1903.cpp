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
    string largestOddNumber(string num) {
		int last = num.size()-1;
		while (last >= 0){
			if ((num[last]-'0') & 1)	break;
			last--;
		}
		return last >= 0 ? num.substr(0, last+1) : "";
    }
};
