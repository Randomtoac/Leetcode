#include <iostream>
using namespace std;
int firstBadVersion(int n);
void isBadVersion(int n){}
int main(){

	return 0;
}
int firstBadVersion(int n) {
	if (n == 1)	return 1;
	int low = 1, high = n, mid = (high+low+1)/2;
	while (low < high){
		if (isBadVersion(mid)){
			high = mid - 1;
			if (mid == low)	return low;
		}	
		else{
			low = mid + 1;
		}	
		mid = (high+low+1)/2;
	}
}
