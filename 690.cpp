#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

	return 0;
}
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
    	unordered_map<int, Employee*> mp;
    	for (auto ee : employees){
    		mp[ee->id] = ee;
		}
        queue<int> q;
        int ret = 0;
        q.push(id);
        while (!q.empty()){
        	Employee* ee = mp[q.front()];
        	q.pop();
        	ret += ee->importance;
        	for (int x : ee->subordinates)	q.push(x);
		}
		return ret;
    }
};
