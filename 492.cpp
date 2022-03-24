#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
vector<int> constructRectangle(int area);
int main(){

	return 0;
}
vector<int> constructRectangle(int area){
	int x = sqrt(area);
	while (area%x)	x--;
	return {area/x, x};
}
