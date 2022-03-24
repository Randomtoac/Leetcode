#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isAdditiveNumber(string num);
int main(){

	return 0;
}
bool isAdditiveNumber(string num){
	for (int i = 1; i < num.size()-1; i++){
		if (num[0] == '0' && i != 1){
			break;
		}
		for (int j = i; j < num.size()-1; j++){
			if (num[i] == '0' && i != j)	break;
			if (valid(i, j, num))	return true;
		}
	}
	return false;
}
bool valid(int secondStart, int secondEnd, string num) {
    int n = num.size();
    int firstStart = 0, firstEnd = secondStart - 1;
    while (secondEnd <= n - 1) {
        string third = stringAdd(num, firstStart, firstEnd, secondStart, secondEnd);
        int thirdStart = secondEnd + 1;
        int thirdEnd = secondEnd + third.size();
        if (thirdEnd >= n || !(num.substr(thirdStart, thirdEnd - thirdStart + 1) == third)) {
            break;
        }
        if (thirdEnd == n - 1) {
            return true;
        }
        firstStart = secondStart;
        firstEnd = secondEnd;
        secondStart = thirdStart;
        secondEnd = thirdEnd;
    }
    return false;
}

string stringAdd(string s, int firstStart, int firstEnd, int secondStart, int secondEnd) {
    string third;
    int carry = 0, cur = 0;
    while (firstEnd >= firstStart || secondEnd >= secondStart || carry != 0) {
        cur = carry;
        if (firstEnd >= firstStart) {
            cur += s[firstEnd] - '0';
            --firstEnd;
        }
        if (secondEnd >= secondStart) {
            cur += s[secondEnd] - '0';
            --secondEnd;
        }
        carry = cur / 10;
        cur %= 10;
        third.push_back(cur + '0');
    }
    reverse(third.begin(), third.end());
    return third;
}

