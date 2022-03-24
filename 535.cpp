#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
private:
	unordered_map<string, string> mpshort;
	string get6(string s){
		string ret;
		for (int i = 0; i < 6; i++){
			int r = rand() % 62;
			if (r < 10)	s.push_back('0'+r);
			else if (r > 36)	s.push_back('A'+r);
			else	s.push_back('a'+r);
		} 
		return ret;
	}
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s6 = "http://tinyurl.com/" + get6(longUrl);
        while (mpshort.count(s6))	s6 = "http://tinyurl.com/" + get6(longUrl);
        mpshort[s6] = longUrl;
        return s6;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mpshort[shortUrl];
    }
};
int main(){

	return 0;
}

