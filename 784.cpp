#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
vector<string> letterCasePermutation(string s);
void nextlevel(string& s, string& last, int cur, vector<string>& ret);
int main(){

	return 0;
}
void nextlevel(string& s, string last, int cur, vector<string>& ret){
    while (cur < s.length() && !isalpha(s[cur])){
        last.push_back(s[cur++]);
    }
    if (last.length() == s.length()){
        ret.push_back(last);
        return;
    }
    last.push_back(tolower(s[cur]));
    if (cur < s.length())   nextlevel(s, last, cur+1, ret);
    last[last.length()-1] = toupper(s[cur]);
    if (cur < s.length())   nextlevel(s, last, cur+1, ret);
}
vector<string> letterCasePermutation(string s){
    vector<string> ret;
    string last = "";
    nextlevel(s, last, 0, ret);
    return ret;
}
