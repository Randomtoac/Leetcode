#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findComplement(int num);
int main(){
	cout << findComplement(2147483647) << endl;
	cout << findComplement(5) << endl;
	return 0;
}
int findComplement(int num){
    long x = 1;
    while (x - 1 < num){
        x <<= 1;
    }
    return num ^ (x-1);
}
