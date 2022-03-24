#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	return 0;
}
class Solution {
public:
    bool winnerOfGame(string colors) {
        int al = 0, ar = 0, bl = 0, br = 0;
        int atot = 0, btot = 0;
        if (colors.back() == 'A')	colors.push_back('B');
        else	colors.push_back('A');
        for (int i = 1; i < colors.size(); i++){
        	if (colors[i] == colors[i-1]){
        		if (colors[i] == 'A')	ar++;
        		else	br++;
			}
			else{
				if (colors[i] == 'B'){
					atot += ar - al > 1 ? ar-al-1 : 0;
					bl = i;
					br = i;
				}
				else{
					btot += br - bl > 1 ? br-bl-1 : 0;
					al = i;
					ar = i;
				}
			}
		}
		return atot && atot > btot;
    }
};
