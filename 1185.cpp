#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
string dayOfTheWeek(int day, int month, int year);
int main(){

	return 0;
}
string dayOfTheWeek(int day, int month, int year){
	string weekday[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	if (month <= 2){
		month += 12;
		year--;
	}
	int c = year/100, y = year%100, m = month, d = day;
	int D = c/4 - 2*c + y + y/4 + 26*(m+1)/10 + d - 1;
	int W = D % 7 + 7;
	return weekday[W%7];
}
