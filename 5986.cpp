#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds);
int main(){

	return 0;
}
int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds){
    vector<string> methods;
    int minute1 = targetSeconds / 60;
    int sec1 = targetSeconds % 60;
    if (minute1 >= 0 && minute1 < 100){
        string s1 = to_string(minute1), s2 = to_string(sec1);
        string s = app(s1, s2);
        methods.push_back(s);
    }
    if (sec1 > 59 && minute1 < 99){
        string s1 = to_string(minute1+1), s2 = to_string(sec1 - 60);
        string s = app(s1, s2);
        methods.push_back(s);
    }
    else if (sec1 < 40 && minute1 > 0){
        string s1 = to_string(minute1-1), s2 = to_string(sec1 + 60);
        string s = app(s1, s2);
        methods.push_back(s);
    }

    int ret = 4 * (pushCost + moveCost);
    for (string& s : methods){
        int cur = 0;
        char lastch = '0' + startAt;
        for (char& ch : s){
            if (ch != lastch){
                cur += moveCost;
            }
            lastch = ch;
            cur += pushCost;
            if (cur > ret)  break;
        }
        ret = min(cur, ret);
    }
    return ret;
}
string app(string s1, string s2){
    if (s1 == "0")	return s2;
    if (s2.size() == 1)	s2 = "0" + s2;
    string ret = s1 + s2;
    return ret;
}
