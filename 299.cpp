#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string getHint(string secret, string guess);
void printint(int* arr);
int main(){
	string s = "6244988279", g = "3819888600";
	string ret = getHint(s, g);
	cout << "Result: " << ret << endl;
	return 0;
}
string getHint(string secret, string guess){
	int secmap[10] = {0}, guemap[10] = {0}, cow = 0, same = 0;
	for (int i = 0; i < guess.size(); i++){
		if (guess[i] == secret[i]){
			same++;
			continue;
		}
		secmap[secret[i] - '0']++;
		guemap[guess[i] - '0']++;
	}
	for (int i = 0; i < 10; i++){
		cow += min(secmap[i], guemap[i]);
	}
	string ret = to_string(same) + "A" + to_string(cow) + "B";
	return ret;
}
void printint(int* arr){
	for(int i = 0; i < 10; i++){
		cout << i << ": " << arr[i] << endl;
	}
}
