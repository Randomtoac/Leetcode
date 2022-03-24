#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr);
int main(){

	return 0;
}
int peakIndexInMountainArray(vector<int>& arr){
	int left = 0, right = arr.size()-1, mid = (left+right)/2;
	if (arr[0] > arr[1])	return 0;
	if (arr[right] > arr[right-1])	return right;
	while(left <= right){
		mid = (left+right)/2;
		if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])	return mid;
		if (arr[mid] < arr[mid+1])	left = mid+1;
		else	right = mid-1;
	}
	return -1;
} 
