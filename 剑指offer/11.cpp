#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int minArray(vector<int>& numbers);
int main(){

	return 0;
}
int minArray(vector<int>& numbers){
	return *min_element(numbers.begin(), numbers.end());
}
