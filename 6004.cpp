#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int countOperations(int num1, int num2);
int main(){

	return 0;
}
int ret = 0;
int countOperations(int num1, int num2){
    if (num1 == 0 || num2 == 0) return ret;
    if (num1 < num2)	return countOperations(num2, num1);
    ret++;
    return countOperations(num2, num1-num2);
}
