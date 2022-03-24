#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <unordered_set>
using namespace std;
bool wordBreak(string s, vector<string>& wordDict);
int main(){

	return 0;
}
bool wordBreak(string s, vector<string>& wordDict){
    unordered_set<string> check;
    for (int i = 0; i < wordDict.size(); i++){
        check.insert(wordDict[i]);
    }
    vector<bool> dp(s.length()+1, false);
    dp[0] = true;
    for (int i = 1; i <= s.length(); i++){
        for (int j = 0; j < i; j++){
            if (dp[j] && check.find(s.substr(j, i-j)) != check.end()){
                dp[i] = true;
                break;
            }
        }
    }
    return dp[s.length()];
}
