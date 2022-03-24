#include <iostream>
#include <vector>
using namespace std;

int countTriplets(vector<int>& arr) {
	int len = arr.size();
	int res = 0;
	for (int i = 0; i < len-1; i++){
		int temp = arr[i];
		for (int k = i+1; k < len; k++){
			temp ^= arr[k];
			if (temp == 0){
				res+= k-i;
			}	
		}
	}
	return res;
}
    
int main(){
	vector<int> arr = {7,11,12,9,5,2,7,17,22};
	cout << countTriplets(arr) << endl;

	return 0;
}

