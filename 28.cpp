#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
	int p = 0, q = 0, h = haystack.size(), n = needle.size();
	if (!n)	return 0;
	for (int i = 0; i < h-n+1; i++){
		if (haystack[i] == needle[q]){
			for (p = i; q < n; p++, q++){
				if (haystack[p] != needle[q])	break;
				if (q == n-1){
					return i;
				}
			}
			q = 0;
		}
	}
	return -1;
}

int main(){
	string haystack = "mississippi", needle = "sipp";
	cout << strStr(haystack, needle) << endl;

	return 0;
}

