#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int numRescueBoats(vector<int>& people, int limit);
int main(){

	return 0;
}
int numRescueBoats(vector<int>& people, int limit){
	int ret = 0;
	sort(people.begin(), people.end());
	int i = 0, j = people.size()-1;
	while(i <= j){
		ret++;
		if (people[i] + people[j] <= limit)	i++;
		j--;
	}
	return ret;
}
