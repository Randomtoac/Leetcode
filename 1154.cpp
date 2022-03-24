#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int dayOfYear(string date);
int main(){

	return 0;
}
int dayOfYear(string date){
	int year = stoi(date.substr(0, 4));
	int month = stoi(date.substr(5, 2));
	int day = stoi(date.substr(8, 2));
	int extraday2 = (year%400==0 || (year%4==0 && year%100!=0)) ? 1 : 0;
	const int dayarr[13] = {0, 31, 28+extraday2, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int ret = 0;
	for (int i = 1; i < month; i++){
		ret += dayarr[i];
	}
	return ret + day;
}
