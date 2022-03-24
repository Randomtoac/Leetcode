#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
char slowestKey(vector<int>& releaseTimes, string keysPressed);
int main(){

	return 0;
}
char slowestKey(vector<int>& releaseTimes, string keysPressed){
	int maxduration = releaseTimes[0];
	char ret = keysPressed[0];
	for (int i = 1; i < releaseTimes.size(); i++){
		int t = releaseTimes[i] - releaseTimes[i-1];
		char ch = keysPressed[i];
		if (t > maxduration){
			maxduration = t;
			ret = ch;
		}
		else if (t == maxduration)	ret = ch > ret ? ch : ret;
	}
	return ret;
}
