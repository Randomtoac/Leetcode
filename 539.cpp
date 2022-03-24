#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int findMinDifference(vector<string>& timePoints);
int main(){

	return 0;
}
int findMinDifference(vector<string>& timePoints){
	vector<int> times;
	for (string& timePoint : timePoints){
		int time = getTime(timePoint);
		times.push_back(time);
		if (time < 12 * 60)	times.push_back(time + 24 * 60);
	}
	sort(times.begin(), times.end());
	print(times);
	int ret = 24 * 60;
	for (int i = 1; i < times.size(); i++){
		ret = min(ret, times[i] - times[i-1]);
	}
	return ret;
}
int getTime(string& time){
	int hours = stoi(time.substr(0,2));
	int minutes = stoi(time.substr(3,2));
	return hours * 60 + minutes;
}
void print(vector<int>& times){
	for (int& time : times)	cout << time << " ";
	cout << endl;
}
