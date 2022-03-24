#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n)
int main(){

	return 0;
}
bool canPlaceFlowers(vector<int>& flowerbed, int n){
	if (!n)	return true;
	for (int i = 0; i < flowerbed.size(); i++){
		if (flowerbed[i])	continue;
		if (i && flowerbed[i-1])	continue;
		if (i != flowerbed.size()-1 && flowerbed[i+1])	continue;
		flowerbed[i] = 1;
		n--;
		if (!n)	return true; 
	}
	return false;
}
