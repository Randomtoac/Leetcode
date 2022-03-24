#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <sstream> 
using namespace std;

int main(){

	return 0;
}

int countValidWords(string sentence){
    stringstream ss;
    ss << sentence;
    string cur;
    int ret = 0;
    while(ss >> cur){
        int cnt = 0, bar = 0, cindex = -1, bindex = -1;
        bool diflag = false;
        for (int i = 0; i < cur.length(); i++){
            if (isdigit(cur[i])){
                diflag = true;
                break;
            }
            if (cur[i] == '-'){
                bar++;
                bindex = i;
                continue;
            }
            if (!isalpha(cur[i]) && !isdigit(cur[i])){
                cnt++;
                cindex = i;
            }
        }
        if (diflag)	continue;
        if (cnt > 1)	continue;
        if (bar > 1)	continue;
        if (cnt == 1 && cindex != cur.length()-1)	continue;
        if (bar == 1 && (bindex == 0 || bindex == cur.length()-1 || !(isalpha(cur[bindex-1]) && isalpha(cur[bindex+1]))))	continue;
        ret++;
    }
    return ret;
}
