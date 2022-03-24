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
    bool validUtf8(vector<int>& data) {
		int flag = 0;
		for (int& x : data){
			if (flag){
				if ((x & 0xC0) != 0x80)	return false;
				flag--;
				continue;
			}
			if ((x & 0xE0) == 0xC0)	flag = 1;
			else if ((x & 0xF0) == 0xE0)	flag = 2;
			else if ((x & 0xF8) == 0xF0)	flag = 3;
			else if ((x & 0x80) == 0)	continue;
			else	return false;
		}
		return flag == 0;
    }
};
