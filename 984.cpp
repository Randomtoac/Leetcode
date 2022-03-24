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
    string strWithout3a3b(int a, int b) {
    	string ret;
    	while (a > b && b){
    		ret.append("aab");
    		a -= 2;
    		b--;
		}
		while (b > a && a){
			ret.append("bba");
			a--;
			b -= 2;
		}
		while (a && b){
			ret.append("ab");
			a--;
			b--;
		}
		while (a){
			ret.push_back('a');
			a--;
		}
		while (b){
			ret.push_back('b');
			b--;
		}
		return ret;
    }
};
