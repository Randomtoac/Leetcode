#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int distributeCandies(vector<int>& candyType);
int main(){

	return 0;
}
int distributeCandies(vector<int>& candyType){
	return min(candyType.size()/2, unordered_set<int>(candyType.begin(), candyType.end()).size());
}
