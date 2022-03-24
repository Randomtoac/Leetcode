#include <iostream>
#include <vector> 
using namespace std;

//vector<int> xorQueries(vector<int>& arr, vector<vector<int> >& queries) {
//	vector<int> output;
//	for (int i = 0; i < queries.size(); i++){
//		int res = arr[queries[i][0]];
//		for (int j = queries[i][0]+1; j <= queries[i][1]; j++){
//			res ^= arr[j];
//		}
//		output.push_back(res); 
//	}
//	return output;
//}

vector<int> xorQueries(vector<int>& arr, vector<vector<int> >& queries) {
	vector<int> output(queries.size()), prefix(arr.size()+1);
	prefix[0] = 0;
	for (int i = 0; i < arr.size(); i++){
		prefix[i+1] = prefix[i] ^ arr[i];
	}
	
	for (int i = 0; i < queries.size(); i++){
		output[i] = prefix[queries[i][0]] ^ prefix[queries[i][1]+1];
	}
	return output;
}

int main(){
//	vector<int> arr = {1,3,4,8};
//	vector<vector<int> > queries = {{0,1},{1,2},{0,3},{3,3}};
	vector<int> arr = {16};
	vector<vector<int> > queries = {{0,0},{0,0},{0,0},{0,0}};
	vector<int> out = xorQueries(arr, queries);
	for (int i = 0; i < out.size(); i++){
		cout << out[i] << endl;
	}

	return 0;
}

