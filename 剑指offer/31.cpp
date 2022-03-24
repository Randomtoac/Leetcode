#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
bool validateStackSequences(vector<int>& pushed, vector<int>& popped);
int main(){

	return 0;
}
bool validateStackSequences(vector<int>& pushed, vector<int>& popped){
	vector<int> stack;
	int i = 0;
	for (int& x : pushed){
		stack.push_back(x);
		while (!stack.empty() && i < popped.size() && stack.back() == popped[i]){
			i++;
			stack.pop_back();
		}
	}
	return i == popped.size();
}
