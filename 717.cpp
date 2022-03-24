#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool isOneBitCharacter(vector<int>& bits);
int main(){

	return 0;
}
bool isOneBitCharacter(vector<int>& bits){
	int i = 0;
	while (i < bits.size()-1){
		if (bits[i] == 0)	i++;
		else	i += 2;
	}
	return i == bits.size()-1;
}
