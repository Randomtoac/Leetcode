#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int bestRotation(vector<int>& nums);
int main(){

	return 0;
}
int bestRotation(vector<int>& nums){
	int n = nums.size();
	vector<int> steps(n, 0);
	int k = 0, score = 0;
	for (int i = 0; i < n; i++){
		if (nums[i] <= i){
			steps[i - nums[i]]++;
			score++;
		}	
		else steps[n + i - nums[i]]++;
	}
	int maxscore = score;
	for (int i = 1; i < n; i++){
		score -= steps[i-1] - 1;
		if (score > maxscore){
			maxscore = score;
			k = i;
		}
	}
	return k;
}
